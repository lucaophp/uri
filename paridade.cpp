#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    char S[101], R[102];
    fgets(S, 101, stdin);
    int i = 0;
    int count = 0;
    while(S[i] != '\n' && S[i] != '\0') {
    	if (S[i] == '1') count++;
        i++;
        
    }
    S[i] = (count % 2 == 0) ? '0' : '1';
    S[i + 1] = '\0';
    printf("%s\n", S);
 
    return 0;
}
