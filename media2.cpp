#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    double n1, n2, n3, media;
    cin >> n1 >> n2 >> n3;
    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}
