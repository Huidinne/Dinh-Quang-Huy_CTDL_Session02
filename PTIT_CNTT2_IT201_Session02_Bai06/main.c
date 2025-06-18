#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le: \n ");
        return 0;
    }
    int* arr = (int*)malloc(n * sizeof(int));
    printf("Nhap phan tu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos , value;
    printf("Nhap vi tri muon chen:\n");
    scanf("%d", &pos);
    if (pos > n || pos < 0) {
        printf("vi tri khong hop le \n");
        return 0;
    }
    printf("Nhap gia tri muon chen\n");
    scanf("%d", &value);
    arr = (int*)realloc(arr, n * sizeof(int));
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}