#include <stdio.h>
#include <conio.h>

int main() {
    char a[50]; // deklarasi variabel Nama
    int b; // deklarasi variabel untuk NIM
    float c, d, e, f, g, h, i, j, k; // deklarasi variabel IPK

    printf("Check IPK MAHASISWA\n"); // judul

    // INPUT
    printf("Nama : ");
    scanf("%s", a);
    
    printf("NIM : ");
    scanf("%d", &b);
    
    printf("IPK Semester 1 (antara 1 dan 4) : ");
    scanf("%f", &c);
    
    printf("IPK Semester 2 (antara 1 dan 4) : ");
    scanf("%f", &d);
    
    printf("IPK Semester 3 (antara 1 dan 4) : ");
    scanf("%f", &e);
    
    printf("IPK Semester 4 (antara 1 dan 4) : ");
    scanf("%f", &f);
    
    printf("IPK Semester 5 (antara 1 dan 4) : ");
    scanf("%f", &g);
    
    printf("IPK Semester 6 (antara 1 dan 4) : ");
    scanf("%f", &h);
    
    printf("IPK Semester 7 (antara 1 dan 4) : ");
    scanf("%f", &i);
    
    printf("IPK Semester 8 (antara 1 dan 4) : ");
    scanf("%f", &j);
    
    // Pembatasan Input IPK
    if (c < 1 || c > 4 || d < 1 || d > 4 || e < 1 || e > 4 ||
        f < 1 || f > 4 || g < 1 || g > 4 || h < 1 || h > 4 ||
        i < 1 || i > 4 || j < 1 || j > 4) {
        printf("Salah Input IPK. Semua IPK harus antara 1 dan 4.\n");
        return 0;
    }
    
    // Perhitungan
    k = (c + d + e + f + g + h + i + j) / 8;

    // Penyelesaian
    if (k >= 3.5) {
        printf("Selamat, %s dengan NIM %d, Anda memiliki predikat Pujian dengan IPK = %.3f\n", a, b, k);
    }
    else if (k >= 3.0) {
        printf("Selamat, %s dengan NIM %d, Anda memiliki predikat Sangat Memuaskan dengan IPK = %.3f\n", a, b, k);
    }
    else if (k >= 2.6) {
        printf("Selamat, %s dengan NIM %d, Anda memiliki predikat Memuaskan dengan IPK = %.3f\n", a, b, k);
    }
    else {
        printf("Selamat, %s dengan NIM %d, Anda memiliki predikat Cukup dengan IPK = %.3f\n", a, b, k);
    }

    // proses
    getch();
    return 0;
}

