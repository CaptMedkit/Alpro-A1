//Nama File : LuasBujurSangkar.c
//Deskripsi : Menghitung luas bujur sangkar
//Pembuat   : Vicoriza Ramadhani
//Tanggal   : 05/03/2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int sisi;
    int luas;

//Algoritma
    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);
    luas = sisi*sisi;

    printf("Luas Bujur Sangkar: %d", luas);
}
