#include <iostream>

using namespace std;

int main()
{
    int no, sisi, isiKubus, r, tinggi, r2;
    float phi, lingkaran, isiSilinder;


    cout << "           <<MENU>> " << endl;
    cout << " 1. Menghitung Isi Kubus" << endl;
    cout << " 2. Menghitung Luas Lingkaran" << endl;
    cout << " 3. Menghitung Isi Silinder " << endl;

    cout << endl;
    cout << "Pilih nomor (1-3) ? ";
    cin >> no;

    switch(no){
    case 1:
        cout << "Panjang Sisi Kubus ? ";
        cin >> sisi;
        isiKubus = sisi*sisi*sisi;
        cout << "Isi Kubus = " << isiKubus << endl;
        break;
    case 2:
        cout << "Panjang jari-jari lingkaran ?";
        cin >> r ;
        phi = 3.14;
        lingkaran = phi *r *r;
        cout << "Luas lingkaran = " << lingkaran << endl;
        break;

    case 3:
        cout << "Panjang jari-jari silinder ?";
        cin >> r;
        cout << endl;
        cout << "Panjang tinggi ?" ;
        cin >> tinggi;
        phi = 3.14;
        isiSilinder = phi * r * tinggi;
        cout << "Isi silinder = " << isiSilinder << endl;
    default:
        cout << "Mohon masukan pilihan sesuai menu yang ada, terima kasih :) ";
    }
        return 0;
}
