#include <stdio.h>

int main() {

    int N;
    
    // stok barang
    int stok[4] = {85, 22, 5, 120};
    
    // nama barang
    char barang[4][30] = {
        "Gula",
        "Dasi SD",
        "Rok Pramuka",
        "Minyak"
    };

    // kode kategori
    char kategori[4][5] = {
        "MK",
        "SK",
        "SK",
        "MK"
    };

    printf("Program Data Stok Barang\n");
    printf("-----------------------\n");
    
    printf("Masukkan jumlah total data (maksimal 4): ");
    scanf("%d", &N);

    if(N < 1 || N > 4){
        printf("Input tidak valid! Jumlah data harus antara 1 - 4.\n");
        return 0;
    }

    printf("\nJumlah total data (N) = %d\n", N);

    printf("\nDeret Stok (s1, s2, ..., sN):\n");
    for(int i = 0; i < N; i++){
        printf("s%d = %d\n", i+1, stok[i]);
    }

    printf("\nKode kategori barang:\n");
    for(int i = 0; i < N; i++){
        printf("%s -> %s\n", barang[i], kategori[i]);
    }

    return 0;
}