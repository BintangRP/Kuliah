//challenge ke-2


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string nama, nim;

    //2 variabel
    cout << "Masukkan NIM :";

    //agar char bisa lebih dari 1
    cin.ignore();
    cin >> nim;


    cout << "Masukkan Nama Lengkap : \n" ;

    //getline agar bisa mengambil inputan yang memiliki spasi
    cin.ignore();
    getline(cin, nama);


    cout << "Halo ,Perkenalkan nama saya " << nama << " dan NIM saya adalah " << nim ;


    return 0;
}
