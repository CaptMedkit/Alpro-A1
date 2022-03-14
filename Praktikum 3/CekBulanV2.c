//Nama File : CekBulanV2.c
//Deskripsi : Menulis nama bulan berdasarkan nomor bulan
//Pembuat   : Vicoriza Ramadhani
//Tanggal   : 13/03/2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int m;

//Algoritma
    printf("Masukkan angka: ");
    scanf("%d", &m);

    if (1 <= m <= 7)
    {
        if (m == 1)
        {
            printf("Januari");
        }
        else if (m == 2)
        {
            printf("Februari");
        }
        else if (m == 3)
        {
            printf("Maret");
        }
        else if (m == 4)
        {
            printf("April");
        }
        else if (m == 5)
        {
            printf("Mei");
        }
        else if (m == 6)
        {
            printf("Juni");
        }
        else if (m == 7)
        {
            printf("Juli");
        }
        else if (m == 8)
        {
            printf("Agustus");
        }
        else if (m == 9)
        {
            printf("September");
        }
        else if (m == 10)
        {
            printf("Oktober");
        }
        else if (m == 11)
        {
            printf("November");
        }
        else if (m == 12)
        {
            printf("Desember");
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