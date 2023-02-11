#include <iostream>

using namespace std;

int lastNon0Digit(int n) { 

    int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
    
    if (n < 10) 
        return dig[n]; 
        
    if (((n / 10) % 10) % 2 == 0) 
        return (6 * lastNon0Digit(n / 5) * dig[n % 10]) % 10; 
    
    else
        return (4 * lastNon0Digit(n / 5) * dig[n % 10]) % 10; 
} 

int main()  {
    
    int n, fatorial, contador = 1;
    long int resultado;
    
    while (cin >> n) {
        
        fatorial = n;
        resultado = 1;
    
        cout << "Instancia " << contador++ << endl;
        cout << lastNon0Digit(n) << endl << endl;
        
    }
    return 0;
}
