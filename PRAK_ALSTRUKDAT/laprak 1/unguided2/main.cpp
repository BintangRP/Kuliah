#include <iostream>
/*
Nama : Bintang Rizqi Pasha
Kelas : IF 09 B
NIM : 21102056
*/
using namespace std;

int main()
{
    //unguided 2
    //deklarasi variabel
    int banyak_data,pilih;
    double data[200], jumlah, rata;
    //if belum input
    lagi:
    jumlah =0;
    //menu yang ditawarkan program
        cout << "Program untuk menghitung jumlah data dan rata-rata data"<<endl;
        cout <<endl;
        cout << "banyak data yang diinginkan (min 5): ";
        cin >> banyak_data;

        for (int i =0;i<banyak_data;i++){
            cout << "Masukkan data angka ke-" << i+1;
            cout << " : ";
            cin >> data[i];
        }

        for (int i=0;i<banyak_data;i++){
        jumlah += data[i];
        }

        cout << "Jumlah data yang dimasukkan : "<< jumlah << endl;
        cout << endl;
        rata = jumlah/banyak_data;
        cout << "Rata-rata data : "<< rata <<endl;

        char lagi;
        cout << "Menu tidak tersedia, ingin keluar ?";
        cout << "(y/t) :"<<ends;
        cin >>lagi;

        if (lagi =='t'){
            cout <<endl;
            system("pause");
            system("cls");
            goto lagi;

        }else if(lagi=='y'){
            cout << "Terima kasih sudah menggunakan program ini"<<endl;
            cout << "See you later!"<<endl;
            system("pause");
            system("cls");
        }


    //program selesai
    return 0;
}
