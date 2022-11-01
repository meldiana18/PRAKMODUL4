#include <stdio.h>
int main(){
printf("kelipatan = ");
    char KLP;
    int i, jumlah, hasil;
scanf("%i %c", &jumlah, &KLP);
     for(int i =1 ; i<=50; i++){
     if (i %jumlah !=0 ){
         printf("%d ", i);
             }printf("", i);
        if(i % jumlah ==0){
        printf("%c ", KLP);
             } printf("", KLP);  
     } 
}