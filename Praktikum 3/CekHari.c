//Nama File : CekHari.c
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

    switch(d)
    {
        case 1:
        printf("Senin");
        break;
        case 2:
        printf("Selasa");
        break;
        case 3:
        printf("Rabu");
        break;
        case 4:
        printf("Kamis");
        break;
        case 5:
        printf("Jumat");
        break;
        case 6:
        printf("Sabtu");
        break;
        case 7:
        printf("Minggu");
        break;
        default:
        printf("Masukan nomor hari tidak tepat");
        break;
    }

    return 0;
}