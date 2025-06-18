#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu trong mang:\n");
    scanf("%d", &n);
    if (n<= 0 || n > 100) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }
    int arr[n];
    printf("Nhap phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Nhap vi tri phan tu muon xoa:\n");
    scanf("%d", &pos);
    if ( pos < 0 || pos > n - 1 ) {
        printf("Khong hop le\n");
        return 0;
    }

    int temp[n];
    if (pos >= 0 && pos < n) {
        for (int i = 0; i < n; i++) {
            if (i < pos) {
                temp[i] = arr[i];
            }else if (i > pos) {
                temp[i - 1] = arr[i];
            }
        }
        for (int i = 0; i < n-1; i++) {
            arr[i] = temp[i];
        }
        n--;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}