#include <stdio.h>
#include <string.h>

int main() {

    int pilihan;
    char paket;
    char nama[50];
    int berat_total = 0;
    int harga;
    int bayar;

    printf("===== SISTEM CAFETARIA IT DEL =====\n");
    printf("1. Paketan\n");
    printf("2. Prasmanan\n");
    printf("Pilih jenis pembelian: ");
    scanf("%d", &pilihan);

    if(pilihan == 1){
        printf("\nMenu Paket:\n");
        printf("A = 10000\n");
        printf("B = 20000\n");
        printf("C = 15000\n");

        printf("Pilih paket (A/B/C): ");
        scanf(" %c", &paket);

        switch(paket){
            case 'A':
            case 'a':
                harga = 10000;
                break;

            case 'B':
            case 'b':
                harga = 20000;
                break;

            case 'C':
            case 'c':
                harga = 15000;
                break;

            default:
                printf("Paket tidak tersedia\n");
                return 0;
        }

        printf("Masukkan nama pembeli: ");
        scanf("%s", nama);

        printf("Metode pembayaran:\n");
        printf("1. Cash\n");
        printf("2. QRIS\n");
        printf("3. Debit\n");
        printf("Pilih: ");
        scanf("%d", &bayar);

        printf("\n===== STRUK PEMBAYARAN =====\n");
        printf("Nama  : %s\n", nama);
        printf("Paket : %c\n", paket);
        printf("Harga : %d\n", harga);
        printf("Terima kasih\n");
    }

    else if(pilihan == 2){

        printf("\nSilahkan mengantri dan memilih makanan.\n");

        printf("Masukkan nama pemilik makanan: ");
        scanf("%s", nama);

        int nasi = 100;
        int telur = 15;
        int gorengan = 30;
        int kerupuk = 10;
        int sambal = 10;
        int lain = 25;

        int ambil;

        printf("\nAmbil nasi? (1=ya 0=tidak): ");
        scanf("%d",&ambil);
        if(ambil==1) berat_total += nasi;

        printf("Ambil telur? (1=ya 0=tidak): ");
        scanf("%d",&ambil);
        if(ambil==1) berat_total += telur;

        printf("Ambil gorengan? (1=ya 0=tidak): ");
        scanf("%d",&ambil);
        if(ambil==1) berat_total += gorengan;

        printf("Ambil kerupuk? (1=ya 0=tidak): ");
        scanf("%d",&ambil);
        if(ambil==1) berat_total += kerupuk;

        printf("Ambil sambal? (1=ya 0=tidak): ");
        scanf("%d",&ambil);
        if(ambil==1) berat_total += sambal;

        printf("Ambil lain-lain? (1=ya 0=tidak): ");
        scanf("%d",&ambil);
        if(ambil==1) berat_total += lain;

        printf("\nTotal berat makanan: %d gram\n", berat_total);

        if(berat_total > 250){
            printf("Berat makanan lebih dari 250 gr.\n");
            printf("Silahkan kurangi makanan anda!\n");
            return 0;
        }

        if(berat_total < 150){
            harga = 12000;
        }
        else if(berat_total >150 && berat_total <200){
            harga = 15000;
        }
        else{
            harga = 20000;
        }

        printf("Harga yang harus dibayar: %d\n", harga);

        printf("\nMetode pembayaran:\n");
        printf("1. Cash\n");
        printf("2. QRIS\n");
        printf("3. Debit\n");
        printf("Pilih: ");
        scanf("%d", &bayar);

        printf("\n===== STRUK PEMBAYARAN =====\n");
        printf("Nama  : %s\n", nama);
        printf("Berat : %d gram\n", berat_total);
        printf("Harga : %d\n", harga);
        printf("Terima kasih\n");
    }

    else{
        printf("Pilihan tidak tersedia\n");
    }

    return 0;
}