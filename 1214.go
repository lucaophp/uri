package main
import ("fmt"; "os"; "bufio"; "strconv"; "io")
const (
	// times for reading 1 million ints
	useBuffer  = true // 24s   => 2.2s
	useScanner = true // 2.2s  => 450ms
	useBytes   = true // 450ms => 280ms
)
var scanner *bufio.Scanner
var reader io.Reader
func init() {
	if !useBuffer {
		reader = os.Stdin
	} else if !useScanner {
		reader = bufio.NewReader(os.Stdin)
	} else {
		scanner = bufio.NewScanner(os.Stdin)
		scanner.Split(bufio.ScanWords)
	}
}
// atoi parses a buffer into an integer
// without overflow detection.
func atoi(b []byte) (int, error) {
	neg := false
	if b[0] == '+' {
		b = b[1:]
	} else if b[0] == '-' {
		neg = true
		b = b[1:]
	}
	n := 0
	for _, v := range b {
		if v < '0' || v > '9' {
			return 0, strconv.ErrSyntax
		}
		n = n*10 + int(v-'0')
	}
	if neg {
		return -n, nil
	}
	return n, nil
}

func die(v ...interface{}) {
	fmt.Fprintln(os.Stderr, v...)
	os.Exit(1)
}
func readInt() int {
	if !useScanner {
		// good ole fmt.Fscan
		var i int
		if _, err := fmt.Fscan(reader, &i); err != nil {
			die(err)
		}
		return i
	}
	// scan for the next token
	if !scanner.Scan() {
		die(io.ErrUnexpectedEOF)
	}
	if !useBytes {
		// allocate string and let standard library parse
		i, err := strconv.Atoi(scanner.Text())
		if err != nil {
			die(err)
		}
		return i
	}
	// manually parse existing bytes without allocation
	i, err := atoi(scanner.Bytes())
	if err != nil {
		die(err)
	}
	return i
}
func main() {
	var c, n int
    var media, count, soma float32
    c = readInt()
    for i := 0; i < c; i++ {
        n = readInt()
        notas := make([]int, n)
        soma = float32(0.0)
        count = 0
        for j := 0; j < n; j++ {
            notas[j] = readInt()
            soma += float32(notas[j])
        }
        media = float32(soma) / float32(n);
        for j := 0; j < n; j++ {
            if float32(notas[j]) > media {
                count++
            }
        }
        fmt.Printf("%.3f%%\n", ((float32(count) / float32(n)) * 100))
        
    }
}
