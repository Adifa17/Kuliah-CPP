#include <iostream>
using namespace std;

int main(){

    // Tipe Data
    string nomor_polis, nama_polis, rumah_sakit;
    int perhari, lama_dirawat, total;
    char plan;

    // Input Data
    cout << "Masukkan nomor pemegang polis : ";
    getline(cin, nomor_polis);
    
    cout << "Masukkan nama pemegang polis : ";
    getline(cin, nama_polis);

    cout << "Masukkan plan polis : ";
    cin >> plan;

    cout << "Masukkan rumah sakit : ";
    cin >> rumah_sakit;

    cout << "Masukkan lama_dirawat : ";
    cin >> lama_dirawat;

    // Proses

    // Plan yang diterima adalah A1, A2, A3, jika di luar itu, maka tidak di proses !
    switch (plan)
    {
    case 'A':
        perhari = 800000;
        break;
    case 'B':
        perhari = 650000;
        break;
    case 'C':
        perhari = 500000;
        break;
    }

    total = perhari * lama_dirawat;

    // Output
    cout << "Entry Data Pemegang Polis" << endl;
    cout << "Nomor Pemegang Polis : " << nomor_polis << endl;
    cout << "Nama Pemegang Polis : " << nama_polis << endl;
    cout << "Plan Polis : " << plan << endl;
    cout << "Rumah Sakit : " << rumah_sakit << endl;
    cout << "Lama Dirawat : " << lama_dirawat << endl;
    cout << "Perhari : " << perhari << endl;
    cout << "Total Biaya : " << total << endl;

    return 0;
}