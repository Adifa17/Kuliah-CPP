# include<stdio.h>
# include<conio.h>

main()
{
    // Mendefinisikan tipe data
    int pj_di, le_fa;
    float kll, luas;

    // Menerima input variable d
    printf("Masukkan nilai panjang : ");scanf("%i",&pj_di);
    printf("Nilai panjang adalah : %i",pj_di);printf("\n");

    // Menerima input variable i
    printf("Masukkan nilai lebar : ");scanf("%i",&le_fa);
    printf("Nilai lebar adalah : %i",le_fa);printf("\n");

    // proses menghitung a
    kll = 2 * (pj_di + le_fa);
    luas = pj_di * le_fa;

    // output
    printf("Nilai keliling persegi panjang adalah : %4.2f",kll);printf("\n");
    printf("Nilai luas persegi panjang adalah : %4.2f",luas);
}