#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void strtoupper(char *string){
  while(*string){
    *string = toupper(*string);
    string++;
  }
}
 
int main() {
 
    double X;
    char res[200];
    scanf("%lf", &X);
    sprintf(res,"%.4e", X);
    strtoupper(res);
    printf("%s%s\n", (X >= 0 ? "+" : ""),res);
 
    return 0;
}
