package main
import ("fmt")
func main() {
	var x float64;
	var n int;
	fmt.Scanf("%d", &n);
	for i := 0; i < n; i++ {
		x += 2.0;
		x = (1.0 / x);
	}
	x += 1.0;
	fmt.Printf("%.10f\n", x); 
	
}
