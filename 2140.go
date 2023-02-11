package main
import ("fmt")
func main() {
	var n, m, dif, qtdNotas int
	var possivel bool = true
	notas := [6]int{2, 5, 10, 20, 50, 100}
	for true {
		possivel = true
		qtdNotas = 0
		fmt.Scanf("%d %d\n", &n, &m)
		
		if n == 0 && n == m {
			break
		}
		dif = m - n
		// fmt.Printf("%d - %d = %d\n",m, n, dif)
		for i := len(notas) - 1; i >= 0 && possivel; i-- {
			qtd := (int)(dif /notas[i])
			if ((qtd + qtdNotas) > 2) {
				possivel = false
				continue
			}
			dif -= qtd * notas[i]
			qtdNotas += qtd
			
		}
		if possivel && dif <= 0 && qtdNotas == 2  { 
			fmt.Printf("possible\n")
		} else {
			fmt.Printf("impossible\n")
		}
		
		
		
	}
}
