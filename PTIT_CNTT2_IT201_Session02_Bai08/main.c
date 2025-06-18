#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu cua mang: \n");
    scanf("%d", &n);
    if ( n <= 0 || n > 100 ) {
        printf("So luong phan tu khong hop le \n");
        return 0;
    }
    int arr[n];
    int result[n];
    int count = 0;
    printf("Nhap phan tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxRight = arr[n - 1];
    result[count] = maxRight;
    count++;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            result[count] = arr[i];
            count++;
            maxRight = arr[i];
        }
    }
    for (int i = count - 1; i >= 0; i-- ) {
        printf(" %d", result[i]);
    }
    return 0;
}