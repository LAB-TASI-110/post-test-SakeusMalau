#include <stdio.h>
#include <string.h>

int main() {

    char kota[10];
    float beratButet, beratUcok, totalBerat;
    float ongkirPerKg, totalOngkir, diskon;
    char keterangan[20];

    printf("Masukkan kode kota tujuan (MDN/BLG/JKT/SBY) atau END untuk selesai:\n");

    while(1){

        scanf("%s", kota);

        if(strcmp(kota, "END") == 0){
            break;
        }

        scanf("%f", &beratButet);

        beratUcok = 1.5 * beratButet;
        totalBerat = beratButet + beratUcok;

        if(strcmp(kota,"MDN")==0){
            ongkirPerKg = 8000;
            strcpy(keterangan,"Dalam Pulau");
        }
        else if(strcmp(kota,"BLG")==0){
            ongkirPerKg = 5000;
            strcpy(keterangan,"Dalam Pulau");
        }
        else if(strcmp(kota,"JKT")==0){
            ongkirPerKg = 12000;
            strcpy(keterangan,"Luar Pulau");
        }
        else if(strcmp(kota,"SBY")==0){
            ongkirPerKg = 13000;
            strcpy(keterangan,"Luar Pulau");
        }
        else{
            printf("Kode kota tidak valid\n");
            continue;
        }

        totalOngkir = totalBerat * ongkirPerKg;

        diskon = 0;
        if(totalBerat > 10){
            diskon = 0.1 * totalOngkir;
        }

        totalOngkir = totalOngkir - diskon;

        printf("\n===== Struk Pembayaran =====\n");
        printf("Kota Tujuan        : %s\n", kota);
        printf("Berat Paket Butet  : %.2f kg\n", beratButet);
        printf("Berat Paket Ucok   : %.2f kg\n", beratUcok);
        printf("Total Berat        : %.2f kg\n", totalBerat);
        printf("Total Ongkir       : %.0f\n", totalOngkir);

        if(totalBerat > 10){
            printf("Promo              : Diskon 10%% ongkir\n");
        }

        if(strcmp(keterangan,"Luar Pulau")==0){
            printf("Promo Tambahan     : Asuransi Gratis\n");
        }

        printf("\n");
    }

    return 0;
}