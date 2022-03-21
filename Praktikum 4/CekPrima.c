//Nama File : CekPrima.c
//Deskripsi : Mengecek apakah sebuah bilangan termasuk bilangan prima
//Pembuat   : Vicoriza Ramadhani
//Tanggal   : 16/03/2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int bil;
    int i;
    int prime;

//Algoritma
    printf("Masukkan input angka: ");
    scanf("%d", &bil);

    prime = 0;
    
    for (i = 2; i <= bil/2; i++)
    {
        if(bil % i == 0)
        {
            prime = 1;
        }
    }
    if(prime == 0)
    {
        printf("%d adalah bilangan prima", bil);
    }
    else
    {
        printf("%d bukan bilangan prima", bil);
    }

    return 0;
}