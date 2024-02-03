#include <stdio.h>


int rotasiKeKanan(int arr[], int n, int k) {
   
    int hasilRotasi[n];

    
    int indeksAwal = n - (k % n);

    
    for (int i = 0; i < n; i++) {
        hasilRotasi[i] = arr[(indeksAwal + i) % n];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = hasilRotasi[i];
    }

   
    return 1;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 5;

    
    int berhasilRotasi = rotasiKeKanan(nums, n, k);

    
    if (berhasilRotasi) {
        printf("Output:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", nums[i]);
        }
    } else {
        printf("Rotasi gagal.");
    }

    return 0;
}
