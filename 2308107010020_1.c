#include <stdio.h>
int main(){
    int decimal, biner = 0, basis = 1, remainder;
    int binary, desimal = 0, base = 1, digit;
    int octal = 0,oktal;
    char input;
    printf("opsi a : konversi bilangan desimal ke biner\n");
    printf("opsi b : konversi bilangan biner ke desimal\n");
    printf("opsi c : konversi bilangan desimal ke octal\n");
    printf("opsi d : konversi bilangan octal ke desimal\n");
    printf("masukkan pilihan (a,b,c,d): ");
    scanf("%c", &input);
    switch (input)
    {
    case 'a':
    printf("Masukkan angka desimal(0-9): ");
    scanf("%d", &decimal);

    // Konversi ke biner
    while (decimal > 0) {
        remainder = decimal % 2; // Dapatkan sisa pembagian
        biner = biner + remainder * basis;
        decimal = decimal / 2; // Bagi angka desimal dengan 2
        basis = basis * 10; // Posisi biner berikutnya
    }

    printf("Biner: %d\n", biner);
        break;
    case 'b':
        printf("Masukkan angka biner(0-1): ");
        scanf("%d", &binary);

    // Konversi ke desimal
    while (binary != 0) {
        digit = binary % 10; // Dapatkan digit biner terakhir
        desimal = desimal + digit * base;
        binary = binary / 10; // Hapus digit biner terakhir
        base = base * 2; // Posisi biner berikutnya
    }
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
