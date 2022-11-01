#include <stdio.h>
int main(){
    int n1, n2,i,j;
    printf("batasan = ");
    scanf("%d  %d", &n1, &n2);

       for( i=n1,j=n2; i<=n2, j>=n1; i++, j--){
         printf("%d %d - ", i,j);
       }
        for (i=n1, j=n2; i>=n2, j<=n1; i--, j++){
              if(n2<n1){
              printf("%d %d - ", i,j);
              }
              printf("", i,j);
            }

       return 0; 
}