# include<stdio.h>
# include<conio.h>

main()
{
    // Mendefinisikan tipe data
    int al_ad, ti_ad;
    float luas_ad;

    // Menerima input variable d
    printf("Masukkan nilai alas: ");scanf("%i",&al_ad);
    printf("Nilai alas adalah : %i",al_ad);printf("\n");

    // Menerima input variable i
    printf("Masukkan nilai tinggi : ");scanf("%i",&ti_ad);
    printf("Nilai tinggi adalah : %i",ti_ad);printf("\n");


    // proses menghitung a
    luas_ad = (al_ad * ti_ad) /2;

    // output
    printf("Nilai luas segitiga adalah : %4.2f",luas_ad);
}