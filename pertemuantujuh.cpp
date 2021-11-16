# include<stdio.h>
# include<conio.h>

main()
{
    // Mendefinisikan tipe data
    int a,d,i,f,aa;

    // Menerima input variable d
    printf("Masukkan nilai d : ");scanf("%i",&d);
    printf("Nilai d adalah : %i",d);printf("\n");

    // Menerima input variable i
    printf("Masukkan nilai i : ");scanf("%i",&i);
    printf("Nilai i adalah : %i",i);printf("\n");

    // Menerima input variable f
    printf("Masukkan nilai f : ");scanf("%i",&f);
    printf("Nilai f adalah : %i",f);printf("\n");

    // Menerima input variable aa
    printf("Masukkan nilai aa : ");scanf("%i",&aa);
    printf("Nilai aa adalah : %i",aa);printf("\n");

    // proses menghitung a
    a=d+i+f+aa;

    // output
    printf("Nilai a adalah : %i",a);
}