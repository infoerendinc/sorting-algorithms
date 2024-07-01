#include <stdio.h>

//Seçim sıralaması, dizinin her bir elemanını uygun pozisyona yerleştirmek için minimum veya maksimum elemanı seçip sıralı bölümün başına yerleştirme işlemi yapar.

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        // Dizinin kalan kısmında en küçük elemanın indisini bul
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Bulunan en küçük elemanı şu anki elemanla değiştir
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Veri dizisi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    selectionSort(arr, n);
    
    printf("\n\nSıralanmış dizi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
