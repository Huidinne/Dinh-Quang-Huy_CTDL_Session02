#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so luong phan tu cua mang: \n");
    scanf("%d", &n);
    if (n <= 0 || n > 100 ) {
        printf("So luong khong hop le\n");
        return 0;
    }
    int arr[n];
    printf("Nhap phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxCount = 0;
    int maxItem;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxItem = arr[i];
        }
    }
    printf("Phan tu xua hien nhieu nhat la: %d\n", maxItem);
    return 0;
}