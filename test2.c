#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total;
    printf("masukkan total = ");
    scanf("%d", &total);


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == total) {
                printf("%d + %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
