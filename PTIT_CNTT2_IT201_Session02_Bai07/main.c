#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so phan tu cua mang: \n");
    scanf("%d", &n);
    if (n<=0 || n>100) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }
    int arr[n];
    printf("Nhap phan tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("Nhap tong can tim");
    scanf("%d", &sum);
    int found = 0;
    int a = 0, b = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                a = arr[i];
                b = arr[j];
                found = 1;
                break;
            }
        }
        if (found != 0) {
            break;
        }
    }
    if (found != 0) {
        printf("%d , %d ", a, b);
    }else {
        printf("Khong tim thay");
    }
    return 0;
}