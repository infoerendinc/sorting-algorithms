#include <stdio.h>

//Birleştirme sıralaması, bölünmüş dizileri sıralayarak birleştirme işlemiyle sıralı sonuç elde eder.

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    // Geçici diziler oluştur
    int L[n1], R[n2];
    
    // Geçici dizilere veri kopyala
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    
    // Geçici dizileri birleştir
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Geriye kalan elemanları kopyala
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        
        // İlk yarıyı sırala
        mergeSort(arr, l, m);
        // İkinci yarıyı sırala
        mergeSort(arr, m + 1, r);
        
        // Sıralı parçaları birleştir
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Veri dizisi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    mergeSort(arr, 0, n - 1);
    
    printf("\n\nSıralanmış dizi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
