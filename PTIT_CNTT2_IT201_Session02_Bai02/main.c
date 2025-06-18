#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n <=0 || n> 100) {
        return 0;
    }
    int arr[n];
    printf("Nhap %d phan tu cua mang: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Nhap so can kiem tra: \n");
    scanf("%d", &num);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("So lan xuat hien cua %d trong mang la %d", num, count);
    return 0;
}