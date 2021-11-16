# include<stdio.h>
# include<conio.h>

main()
{
    // Mendefinisikan tipe data
    int al_ad,ti_if,ri_aa;
    float luas_alas, luas_selimut, luas_prisma;

    // Menerima input variable d
    printf("Masukkan nilai alas prisma : ");scanf("%i",&al_ad);
    printf("Nilai alas prisma adalah : %i",al_ad);printf("\n");

    // Menerima input variable i
    printf("Masukkan nilai tinggi prisma : ");scanf("%i",&ti_if);
    printf("Nilai tinggi prisma adalah : %i",ti_if);printf("\n");

    // Menerima input variable f
    printf("Masukkan nilai jari-jari prisma : ");scanf("%i",&ri_aa);
    printf("Nilai jari-jari prisma adalah : %i",ri_aa);printf("\n");

   

    // proses menghitung a
    luas_alas = (al_ad * ti_if)/2;
    luas_selimut = 2 * ri_aa * ri_aa * ti_if;
    luas_prisma = luas_alas * luas_selimut;

    // output
    printf("Nilai luas alas adalah : %4.2f",luas_alas);
    printf("\n");
    printf("Nilai luas selimut adalah : %4.2f",luas_selimut);
    printf("\n");
    printf("Nilai luas prisma adalah : %4.2f",luas_prisma);
}