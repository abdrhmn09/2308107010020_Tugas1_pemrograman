# 2308107010020_Tugas1_pemrograman
 nomor01
#include <stdio.h>
int main(){
    //deklasi tipe data
    int decimal, biner = 0, basis = 1, remainder;
    int binary, desimal = 0, base = 1, digit;
    int octal = 0,oktal;
    char input;
    //opsi konversi
    printf("opsi a : konversi bilangan desimal ke biner\n");
    printf("opsi b : konversi bilangan biner ke desimal\n");
    printf("opsi c : konversi bilangan desimal ke octal\n");
    printf("opsi d : konversi bilangan octal ke desimal\n");
    printf("masukkan pilihan (a,b,c,d): ");
    scanf("%c", &input);
    switch (input)
    {
    case 'a':
    //input angka desimal
    printf("Masukkan angka desimal(0-9): ");
    scanf("%d", &decimal);
    //Konversi ke biner
    while (decimal > 0) {
        remainder = decimal % 2; // Dapatkan sisa pembagian
        biner = biner + remainder * basis;
        decimal = decimal / 2; // Bagi angka desimal dengan 2
        basis = basis * 10; // Posisi biner berikutnya
    }
    //output dalam biner
    printf("Biner: %d\n", biner);
        break;
    case 'b':
        //input angka biner
        printf("Masukkan angka biner(0-1): ");
        scanf("%d", &binary);
    //Konversi ke desimal
    while (binary != 0) {
        digit = binary % 10; // Dapatkan digit biner terakhir
        desimal = desimal + digit * base;
        binary = binary / 10; // Hapus digit biner terakhir
        base = base * 2; // Posisi biner berikutnya
    }
        //output dalam desimal
        printf("Desimal: %d\n", desimal);
        break;
    case 'c':
// Input angka desimal dari pengguna
    printf("Masukkan angka desimal(0-9): ");
    scanf("%d", &decimal);
    // Konversi ke oktal
    while (decimal > 0) {
        remainder = decimal % 8; // Dapatkan sisa pembagian
        octal = octal + remainder * base;
        decimal = decimal / 8; // Bagi angka desimal dengan 8
        base = base * 10; // Posisi oktal berikutnya
    }
    printf("Oktal: %d\n", octal);
        break;
    case 'd':
// Input angka oktal dari pengguna
    printf("Masukkan angka oktal(0-7): ");
    scanf("%d", &oktal);
    // Konversi ke desimal
    while (oktal != 0) {
        digit = oktal % 10; // Dapatkan digit oktal terakhir
        desimal = desimal + digit * base;
        oktal = oktal / 10; // Hapus digit oktal terakhir
        base = base * 8; // Posisi desimal berikutnya
    }
    printf("Desimal: %d\n", desimal);       
        break;
    }
}

nomor02
#include <stdio.h>
#include <stdlib.h> // untuk menggunakan fungsi atoi()

int main() {
    char input[5]; // untuk menyimpan input pengguna
    int number;
    do {
        printf("Masukkan tahun: ");//pengguna memasukkan input
        scanf("%s", &input);
        // Konversi input ke integer
        number = atoi(input);
        // Periksa apakah input adalah 4 digit angka
        if (number >= 1000 && number <= 9999) {
            if((number % 4 == 0 && number % 100 != 0) || number % 400 == 0)//periksa apakah input tahun kabisat atau bukan
            {
            printf("%d adalah tahun kabisat", number);}//output yang keluar jika input adalah tahun kabisat
            else{
                printf("%d adalah tahun biasa",number);//output yang keluar jika input bukan tahun kabisat
            }
            break; // Keluar dari loop jika input adalah 4 digit angka
        } else {
            printf("Input tidak valid. Masukkan 4 digit angka.\n");//output yang keluar jika input tidak terdiri dari 4 angka
        }
    } while (1); // Loop akan berjalan terus sampai kondisi terpenuhi
    return 0;
}
