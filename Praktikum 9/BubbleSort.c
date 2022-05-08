//Nama File : BubbleSort.c
//Deskripsi : Menjalankan program bubble sort
//Pembuat   : Vicoriza Ramadhani / 24060121130053
//Tanggal   : 07/05/2022

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int N)
{
    //Kamus Lokal
    int i;
    int j;
    int swap;

    //Algoritma
    for(i = 0; i < N; i++)
    {
        for (j = 0; j < N - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }        
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

    BubbleSort(arr, N);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}