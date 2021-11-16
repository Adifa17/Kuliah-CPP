# include<stdio.h>
# include<conio.h>

main()
{
    // Mendefinisikan tipe data
    float rd, luas_ad, keliling_ad;

    // Menerima input variable d
    printf("Masukkan nilai jari-jari : ");scanf("%f",&rd);
    printf("Nilai jari-jari adalah : %4.2f",rd);printf("\n");

    // proses menghitung luas lingkaran
    luas_ad = 3.14 * rd * rd;
    keliling_ad = 2 * 3.14 * rd;

    // output
    printf("Nilai luas lingkaran adalah : %4.2f",luas_ad);
    printf("\n");
    printf("Nilai Keliling Lingkaran adalah : %4.2f",keliling_ad);
}