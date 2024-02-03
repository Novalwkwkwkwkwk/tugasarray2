#include <stdio.h>

int main() {
    int arr[] = {20, 20, 20, 20,  3, 6, 7, 8, 10, 3, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array yang duplikat = ");

    // Array untuk melacak elemen yang sudah dicetak
    int cetakDuplikat[n];
    int jumlahCetakDuplikat = 0;

    for (int i = 0; i < n; i++) {
        // Periksa apakah elemen sudah dicetak sebelumnya
        int sudahCetak = 0;
        for (int k = 0; k < jumlahCetakDuplikat; k++) {
            if (arr[i] == cetakDuplikat[k]) {
                sudahCetak = 1;
                break;
            }
        }

        
        if (!sudahCetak) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    cetakDuplikat[jumlahCetakDuplikat++] = arr[i];
                    break;
                }
            }
        }
    }

    return 0;
}
