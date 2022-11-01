#include <stdio.h>
int main(){
int i,x, batas;
printf("masukkan nilai batas = ");
scanf("%d", &batas);
 for(i=1; i<=batas; i+=2){
       printf("%d ",i);
 }
       printf("\n");
 for(x=batas; x>=1 ; x--){ 
      if (x%2 ==0){
          printf("%d ", x);
      }      
 }
          printf("\n");
}
