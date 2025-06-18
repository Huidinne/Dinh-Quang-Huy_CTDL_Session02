#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu cua mang:\n");
    scanf("%d", &n);
    if (n<=0 || n>100) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos , newValue;
    printf("Nhap vi tri muon sua :\n");
    scanf("%d", &pos);
    printf("Nhap gia tri moi:\n");
    scanf("%d", &newValue);

    if (pos >= 0 && pos < n) {
        arr[pos] = newValue;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}