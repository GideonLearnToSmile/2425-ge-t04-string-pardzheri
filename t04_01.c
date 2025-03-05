//Gideon Benedictus Panjaitan
//11S24036
#include <stdio.h>
#include <string.h>

int main(void) {
    char kata[60];
    scanf("%s", kata);

    int panjang = strlen(kata) / 3;
    int daftar[panjang];

    for (int i = 0; i < panjang; i++) {
        // Konversi manual dari string ke integer
        int angka = (kata[i * 3] - '0') * 100 + 
                    (kata[i * 3 + 1] - '0') * 10 + 
                    (kata[i * 3 + 2] - '0');

        daftar[i] = angka;  // Simpan hasil konversi
    }

    // Cetak hasil sebagai karakter ASCII
    for (int i = 0; i < panjang; i++) {
        printf("%c", daftar[i]);
    }

    return 0;
}