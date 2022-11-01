#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int pprogram;
    float a,b,hasil, c,d, hasilbagi;
    printf("\tpilih program   \n");
    printf("\t1. Penjumlahan  \n");
    printf("\t2. Pengurangan  \n");
    printf("\t3. Perkalian    \n");
    printf("\t4. Pembagian    \n");
    printf("\t5. Exit         \n");

    printf("Masukkan pilihan  :  ");
    scanf("%d", &pprogram);
    switch (pprogram){
        case 1:
        printf("Masukkan Nilai Pertama   :");
        scanf("%f", &a);
        printf("Masukkan Nilai Kedua     :");
        scanf("%f", &b);
        hasil= a+b;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n",a,b,hasil);
        break;
        case 2:
        printf("Masukkan Nilai Pertama   :");
        scanf("%f", &a);
        printf("Masukkan Nilai Kedua     :");
        scanf("%f", &b);
        hasil= a-b;
        printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", a,b,hasil);
        break;
        case 3:
        printf("Masukkan Nilai Pertama   :");
        scanf("%f", &a);
        printf("Masukkan Nilai Kedua     :");
        scanf("%f", &b);
        hasil= a*b;
        printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", a,b,hasil);
        break;
        case 4:
        printf("Masukkan Nilai Pertama   :");
        scanf("%f", &a);
        printf("Masukkan Nilai Kedua     :");
        scanf("%f", &b);
        hasil= a/b;
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", a,b,hasil);
        break;
        case 5:
        printf("Terima kasih, telah menggunakan kalkulator MELDIANA HANDAYANI");
        exit(0);
        default:
        printf("Input anda salah, silahkan coba lagi.\n");
        break;

    }
    main();
return 0;
}