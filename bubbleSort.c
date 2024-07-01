#include <stdio.h>

//Kabarcık sıralama, her adımda yan yana bulunan elemanları karşılaştırıp gerektiğinde yer değiştiren basit bir sıralama algoritmasıdır.

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Her adımda son i eleman zaten doğru yerinde olduğu için n-i-1 kadar karşılaştırma yapılır
        for (j = 0; j < n-i-1; j++) {
            // Eğer yan yana gelen elemanlar yanlış sıralanmışsa yer değiştir
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Veri dizisi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    bubbleSort(arr, n);
    
    printf("\n\nSıralanmış dizi:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
