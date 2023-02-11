package main
 
import (
    "fmt";
    "math"
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
        if (primo == 0 || num <= 1) {
            fmt.Printf("Not Prime\n");
        } else {
			limit := int(math.Sqrt(float64(num)))
            for j = 3; j < limit; j = j + 1 {
                if num % j == 0 { 
                    primo = 0;
                    break;
				}
			}
            if (primo == 0) {
                fmt.Printf("Not Prime\n");
            } else {
                fmt.Printf("Prime\n");
            }
        }
    }
}
