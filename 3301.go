package main
import ("fmt")

func main() {
    
    var h, z, l int;
    
    fmt.Scanf("%d %d %d", &h, &z, &l);
    
    if ((z > h && h > l) || (z < h && h < l)) {
        fmt.Printf("huguinho");
    }else if ((h > z && z > l) || (h < z && z < l)){
        fmt.Printf("zezinho");
    }else{
        fmt.Printf("luisinho");
    }

    fmt.Printf("\n");
}
