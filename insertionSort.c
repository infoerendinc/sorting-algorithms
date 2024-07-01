#include <stdio.h>

//Eklemeli sıralama, dizinin bir elemanını alıp sıralı bölüme uygun konuma ekler.

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        // Sıralı bölümde key'in doğru pozisyonunu bul
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Veri dizisi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    insertionSort(arr, n);
    
    printf("\n\nSıralanmış dizi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
