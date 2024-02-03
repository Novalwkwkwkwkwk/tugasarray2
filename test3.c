#include <stdio.h>

// Fungsi untuk rotasi array ke kanan
int rotasiKeKanan(int arr[], int n, int k) {
    // Inisialisasi array sementara untuk menyimpan hasil rotasi
    int hasilRotasi[n];

    // Hitung indeks awal setelah rotasi
    int indeksAwal = n - (k % n);

    // Pindahkan elemen-elemen array ke array sementara sesuai dengan rotasi
    for (int i = 0; i < n; i++) {
        hasilRotasi[i] = arr[(indeksAwal + i) % n];
    }

    // Salin hasil rotasi kembali ke array asli
    for (int i = 0; i < n; i++) {
        arr[i] = hasilRotasi[i];
    }

    // Mengembalikan nilai untuk menandakan berhasil atau tidaknya rotasi
    return 1;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    // Memanggil fungsi untuk rotasi array
    int berhasilRotasi = rotasiKeKanan(nums, n, k);

    // Menampilkan hasil rotasi
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
