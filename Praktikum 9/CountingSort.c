//Nama File : BubbleSort.c
//Deskripsi : Menjalankan program selection sort
//Pembuat   : Vicoriza Ramadhani / 24060121130053
//Tanggal   : 08/05/2022

#include <stdio.h>
#include <stdlib.h>

void CountingSort(int arr[], int N)
{
    //Kamus Lokal
    int i;
    int j;
    int posisi;
    int swap;

    //Algoritma
    for(i = 0; i < (N - 1); i++)
    {
        posisi = i;
        for(j = i + 1; j < N; j++)
        {
            if(arr[j] < arr[posisi])
            {
                posisi = j;
            }
        }
        swap = arr[i];
        arr[i] = arr[posisi];
        arr[posisi] = swap;
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
    printf("Masukkan data sebanyak %d:\n", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    CountingSort(arr, N);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}