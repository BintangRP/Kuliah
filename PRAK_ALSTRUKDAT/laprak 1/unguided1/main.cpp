#include <iostream>
/*
Nama : Bintang Rizqi Pasha
Kelas : IF 09 B
NIM : 21102056
*/

using namespace std;

int main() {

    //unguided 1
    //deklarasi variabel
    int jumlah_beli[100],jumlah_barang,jumlah2=0, total[100],total2=0, total_final=0;
    string nama[100],kode[100];
    int harga[100];
    int pilih;

    //menu untuk pengguna
    menu:
    system("cls");
    cout <<"========================"<<endl;
    cout <<"        Supermarket     "<<endl;
    cout <<"========================"<<endl;
    cout <<"1. Bayar & Beli         "<<endl;
    cout <<"2. Exit                 "<<endl;
    cout <<"========================"<<endl;
    cout <<"Pilih Menu : "<<ends;
    cin >>pilih;//pilih option switch
    cout <<endl;

    switch(pilih){
        //menu beli
        case 1:{
            beli:
            system("cls");
            cout << "Kode       Nama        Harga"<<endl;
            cout << "============================"<<endl;
            cout << "001        Penghapus   2000"<<endl;
            cout << "002        Pensil      3000"<<endl;
            cout << "003        Buku Tulis  4000"<<endl;
            cout << "004        Rautan      3000"<<endl;
            cout << "005        Penggaris   1500"<<endl;
            cout << "============================"<<endl;
            cout << "Beli berapa banyak barang : ";
            cin >> jumlah_barang;

            //input pembelian barang
            for(int i=0;i<jumlah_barang;i++){
                //nama kode

                cout <<endl<<"Masukkan Kode Barang:"<<ends;
                cin >> kode[i];

                //nama barang
                cout << "Masukkan nama barang :"<<ends;
                cin >> nama[i];

                //jumlah_beli
                cout <<"Mau beli berapa (item yang diinginkan) :"<<ends;
                cin >> jumlah_beli[i];

                //harga barang
                cout <<"Masukkan harga barang :"<<ends;
                cin >>harga[i];

                //total harga
                total2 = (jumlah_beli[i]*harga[i]);
                total[i] = total2;
                //total final (semua total)
                jumlah2 += jumlah_beli[i];
                total_final += total[i];
            }
            //tampil barang dan total bayar
                cout <<endl;
                cout << "============================================================"<<endl;
                cout << "Kode       Nama        Jumlah          Harga           Total"<<endl;
                cout << "============================================================"<<endl;
                for(int i=0;i<jumlah_barang;i++){
                cout << kode[i]<<"       "<<nama[i]<<"        "<<jumlah_beli[i]<<"            "<<harga[i]<<"            "<<total[i]<<endl;
                }
                cout << "============================================================"<<endl;
                cout << "Jumlah Item = "<< jumlah2<<endl;
                cout << "Total Pembelian = "<< total_final<<endl;
            cout<<endl;
            system("pause");
            goto menu;
        }
        //menu untuk keluar
        case 2:{
            cout <<"Apakah benar anda ingin keluar? (y/t)"<<ends;
            char out;
            cin >> out;
            if (out == 'y'){
                cout<<endl <<"Terima kasih sudah berkunjung"<<endl;
                cout <<"Have a nice day > <"<<endl;
                system("pause");
                break;
            }else{
                cout<<endl <<"> < Selamat datang kembali!!!"<<endl;
                cout <<"Selamat berbelanja"<<endl;
                system("pause");
                system("cls");
                goto menu;
            }
        }
        //if menu tidak tersedia
        default :{
            cout<<endl << "Menu yang dipilih tidak tersedia"<<endl;
            cout << "Have a nice day > <"<<endl;
            system("pause");
            system("cls");
            goto menu;
        }
    }
    //selesai
    return 0;
}
