//Nama File : CekHariV2.c
//Deskripsi : Menulis nama hari berdasarkan nomor hari
//Pembuat   : Vicoriza Ramadhani
//Tanggal   : 13/03/2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int d;

//Algoritma
    printf("Masukkan angka: ");
    scanf("%d", &d);

    if (1 <= d <= 7)
    {
        if (d == 1)
        {
            printf("Senin");
        }
        else if (d == 2)
        {
            printf("Selasa");
        }
        else if (d == 3)
        {
            printf("Rabu");
        }
        else if (d == 4)
        {
            printf("Kamis");
        }
        else if (d == 5)
        {
            printf("Jumat");
        }
        else if (d == 6)
        {
            printf("Sabtu");
        }
        else if (d == 7)
        {
            printf("Minggu");
        }
        else
        {
            printf("Masukan nomor tidak tepat");
        }
    }
    else
    {
        printf("Masukkan nomor tidak tepat");
    }

    return 0;
}