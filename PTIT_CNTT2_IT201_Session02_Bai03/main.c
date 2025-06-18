#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n<= 0 || n > 100) {
        printf("so phan tu khong hop le");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = size - 1;
    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}