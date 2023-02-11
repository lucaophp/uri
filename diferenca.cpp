#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int n1, n2, n3, n4;
    int diferenca = 0;
    cin >> n1 >> n2 >> n3 >> n4;
    diferenca = (n1 * n2 - n3 * n4);
    
    printf("DIFERENCA = %d\n", diferenca);
 
    return 0;
}
