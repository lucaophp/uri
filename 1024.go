package main
 
import (
    "fmt";
    "math"
)


func main() {
	var n, i, j, tam int;
	var palavra, palavraResposta string;
	fmt.Scanf("%d", &n);
	for i = 0; i < n; i++ {
		
		fmt.Scanf("%s\n", palavra);
		
		
		for j = 0; j < length(palavra); j++ {
			if ((palavra[j] >= 'A' && palavra[j] <= 'Z') || (palavra[j] >= 'a' && palavra[j] <= 'z')) {
				palavraResposta[j] = byte(palavra[j] + 3);
			} else {
				palavraResposta[j] = palavra[j];
			}
		}
		// strrev(palavraResposta);
		tam = length(palavraResposta);
		
		for j = math.Trunc(tam /2); j < tam; j++ {
			palavraResposta[j] = char(int(palavraResposta[j]) - 1);
		}
		
		puts(palavraResposta);
	}
	return 0;
	
}
