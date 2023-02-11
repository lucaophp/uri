package main
 
import (
    "fmt"
)
 
func main() {
    var a, b, c, media float64

    fmt.Scanf("%f", &a)
    fmt.Scanf("%f", &b)
    fmt.Scanf("%f", &c)
    media = ((2 * a) + (3 * b) + (5 * c)) / 10
    fmt.Printf("MEDIA = %.1f\n", media)
}
