//Nama File : InsertionSort.c
//Deskripsi : Menjalankan program insertion sort
//Pembuat   : Vicoriza Ramadhani / 24060121130053
//Tanggal   : 07/05/2022

#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int arr[], int N)
{
    //Kamus Lokal
    int i;
    int j;
    int swap;
    
    //Algoritma
    for (i = 1; i < N; i++) {
        swap = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > swap) {
            arr[j + 1] = arr[j];
            j-- ;
        }
        arr[j + 1] = swap;
    }
}

int main()
{
    //Kamus
    int N; 
    int i;

    //Algoritma
    printf("Masukkan banyaknya jumlah data: ");
    scanf("%d", &N);
    int arr[N];
    printf("Masukkan data sebanyak %d :\n", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    InsertionSort(arr, N);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}