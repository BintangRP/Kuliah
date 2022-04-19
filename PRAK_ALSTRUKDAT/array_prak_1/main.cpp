#include <iostream>

using namespace std;

int main()
{
    //unguided 1
    int jumlah_beli[100],jumlah_barang,jumlah2=0, total[100],total2=0, total_final=0;
    string nama[100],kode[100];
    int harga[100];
    int pilih;


    menu:
    cout <<"========================"<<endl;
    cout <<"        Supermarket     "<<endl;
    cout <<"========================"<<endl;
    cout <<"1. Bayar & Beli         "<<endl;
    cout <<"2. Exit                 "<<endl;
    cout <<"========================"<<endl;
    cout <<"Pilih Menu : "<<ends;
    cin >>pilih;
    cout <<endl;

    switch(pilih){
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

            for(int i=0;i<jumlah_barang;i++){
                //nama kode
                cout <<endl<<"Masukkan Kode Barang  :"<<ends;
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
            break;
        }
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
        default :{
            cout<<endl << "Menu yang dipilih tidak tersedia"<<endl;
            cout << "Have a nice day > <"<<endl;
            system("pause");
            system("cls");
            goto menu;
        }
    }

    /*
    //unguided 2
    int banyak_data, rata,jumlah, data[200],pilih;
    bool udh;
    udh = false;
    menu:
        lagi:
        cout <<endl;
        cout <<"===================="<<endl;
        cout <<"        Menu        "<<endl;
        cout <<"===================="<<endl;
        cout <<"1. banyak data      "<<endl;
        cout <<"2. jumlah semua data"<<endl;
        cout <<"3. rata-rata data   "<<endl;
        cout <<"===================="<<endl;
        cout << endl<<"Pilih menu : ";
        cin >> pilih;
        cout << endl;

        switch(pilih){
    if (pilih == 1){
            case 1:{
                cout << "banyak data yang diinginkan (min 5): ";
                cin >> banyak_data;

                for (int i =0;i<banyak_data;i++){
                    cout << "Masukkan data angka ke-" << i+1;
                    cout << " : ";
                    cin >> data[i];
                }
                udh = true;
                system("pause");system("cls");goto menu;
                break;
            }
    }else{
        cout << "Pilih menu 1 terlebih dahulu untuk lanjut"<<endl;
        system("pause");
        system("cls");
        goto menu;
    }

    if(udh ==true){
        case 2:{
                for (int i=0;i<banyak_data;i++){
                jumlah += data[i];
            }
            cout << "Jumlah data yang dimasukkan : "<< jumlah << endl;
            system("pause");system("cls");goto menu;
            break;
            }

            case 3:{
                rata = jumlah/banyak_data;
                cout << "Rata-rata data : "<< rata <<endl;
                 system("pause");system("cls");goto menu;
                break;
            }

            default:{
                char lagi;
                cout << "lagi? (y/t) :"<<ends;
                cin >>lagi;

                if (lagi =='y'){
                    cout <<endl;
                    system("pause");
                    system("cls");
                    goto lagi;

                }else if(lagi=='t'){
                    cout << "bye bye"<<endl;
                    system("pause");
                    system("cls");
                }
            }
        }
    }


    //unguided 3
    int A[2][2];

    cout <<"Masukkan nilai array :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            cout << "nilai array ke-"<< i+1<<" :";
            cin >> A[i][j];
        }
    }
    //tampilan matriks kita
    cout <<endl<< "Matriks yang telah dibuat :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            cout << A[i][j]<<ends;
        }
        cout<<endl;
    }

    //adjoin matriks 2x2
    int A2[2][2]; //00 11
    A2[0][0] = A[1][1];
    A2[1][1] = A[0][0];
    A2[0][1] = A[0][1]*-1;
    A2[1][0] = A[1][0]*-1;

    cout<<endl << "Adjoin dari matriks :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            cout<< A2[i][j]<< ends;
        }
        cout << endl;
    }

    //determinan dari matriks
    int det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    cout << endl<<"Determinan dari matriks :"<< det<<endl;

    //invers dari matriks
    int invers[2][2];
    cout << endl<< "Invers dari matriks :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            invers[i][j] = A2[i][j]/det;
            cout<< invers[i][j]<< ends;
        }
        cout << endl;
    }
    */
    return 0;
}
