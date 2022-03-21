//Nama File : FaktorBil.c
//Deskripsi : Menentukan faktor-faktor dari sebuah bilangan
//Pembuat   : Vicoriza Ramadhani
//Tanggal   : 16/03/2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int bil;
    int i;

//Algoritma
    printf("Masukkan input angka: ");
    scanf("%d", &bil);
    printf("Faktor dari bilangan %d: ", bil);

    for(i = 1; i <= bil; i++)
    {
        if(bil % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}