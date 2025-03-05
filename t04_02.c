#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char kata[20];
    fgets(kata, 20, stdin);

    // Hapus newline (`\n`) jika ada
    size_t panjang = strlen(kata);
    if (panjang > 0 && kata[panjang - 1] == '\n') {
        kata[panjang - 1] = '\0';
        panjang--; // Update panjang string
    }

    // Hapus carriage return (`\r`) jika ada (untuk Windows)
    if (panjang > 0 && kata[panjang - 1] == '\r') {
        kata[panjang - 1] = '\0';
        panjang--;
    }

    // Cetak ASCII dengan format 3 digit
    for (size_t i = 0; i < panjang; i++) {
        printf("%03d", kata[i]);
    }

    return 0;
}
