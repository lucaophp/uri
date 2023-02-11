package main
 
import (
    "fmt"
)
 
func main() {
	var n, num, i, j int;
    var primo int = 1;
    feixo := [4]int{2,3,5,7}; 
    fmt.Scanf("%d\n", &n);
    for i = 0; i < n; i++ {
    	primo = 1;
        fmt.Scanf("%d\n", &num);
        for j = 0; j < 4; j++ {
        	if (num % feixo[j] == 0 && num != feixo[j]) { 
                primo = 0;
                break;
            }
		}
        if (primo == 0) {
            fmt.Printf("%d nao eh primo\n", num);
        } else {
            for j = 3; j < num; j = j + 2 {
                if num % j == 0 { 
                    primo = 0;
                    break;
				}
			}
            if (primo == 0) {
                fmt.Printf("%d nao eh primo\n", num);
            } else {
                fmt.Printf("%d eh primo\n", num);
            }
        }
    }
}
