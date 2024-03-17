#include <stdio.h>
#include <stdlib.h> // untuk menggunakan fungsi atoi()

int main() {
    char input[5]; // untuk menyimpan input pengguna
    int number;

    do {
        printf("Masukkan tahun: ");
        scanf("%s", &input);

        // Konversi input ke integer
        number = atoi(input);

        // Periksa apakah input adalah 4 digit angka
        if (number >= 1000 && number <= 9999) {
            if((number % 4 == 0 && number % 100 != 0) || number % 400 == 0){
            printf("%d adalah tahun kabisat", number);}
            else{
                printf("%d adalah tahun biasa",number);
            }
            break; // Keluar dari loop jika input adalah 4 digit angka
        } else {
            printf("Input tidak valid. Masukkan 4 digit angka.\n");
        }
    } while (1); // Loop akan berjalan terus sampai kondisi terpenuhi

    return 0;
}
