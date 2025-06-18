#include <stdio.h>
int main() {
    int arr[] = {-1,5,-3,2,10,19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);
}