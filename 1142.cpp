#include <stdio.h>

int main() {

     int level,l=1, i, j;
     scanf("%d", &level);
     for(i=1;i<=level;i++)
     {
         for(j=1;j<=4;j++,l++)
         {
             if(j%4==0)
             printf("PUM\n");

         else
         {
             printf("%d ", l);
         }
     }
     }

    return 0;
}
