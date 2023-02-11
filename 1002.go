package main
import (
	"fmt";
	"math"
)
func main(){
	var raio float64
	fmt.Scanf("%f", &raio)
	const pi float64 = 3.14159
	var area = pi * (math.Pow(raio, 2))
	fmt.Printf("A=%.4f\n", area)
}
