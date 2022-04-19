#include <iostream>

using namespace std;

int main()
{
    int mat1[2][2],mat2[2][2];
    int angka,jumlah[2][2],kurang[2][2],kali[2][2],transpose [2][2];
    char ya;

    menu:
    cout << "KALKULATOR MATRIKS 2X2" << endl;
    cout << "1.Penjumalhan Matriks" << endl;
    cout << "2.Pengurangan Matriks" << endl;
    cout << "3.Perkalian Matriks" << endl;
    cout << "4.Taspose Matriks" << endl;
    cout<<endl;

    cout << "Pilih operasi yang anda ingin lakukan : ";
    cin >> angka;
    cout<<endl;

    switch (angka){
            case 1 :{
                cout << "Selamat datang di menu penjumlahan matriks" << endl;

                goto matin;
                goto matout;
                goto jumlah;
            }
            break;

            case 2 :{
                cout << "Selamat datang di menu Pengurangan matriks " << endl;

                goto matin;
                goto matout;
                goto krg;
            }
            break;
            case 3 :{
                cout << "Selamat datang di menu Perkalian matriks " << endl;

                goto matin;
                goto matout;
                goto kli;
                break;
            }


            case 4 :{
                cout << "Selamat datang di menu Traspose matriks " << endl;

                goto matin;
                goto matout;
                goto trs;
                break;
            }
            default:{

            }
        }

        matin:
            cout<<"Masukan angka matriks yang ingin dioperasikan : " "\n" << endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    cout << "Elemen[" <<i<< "][" <<j<< "] = ";
                    cin >> mat1[i][j];
                }
            }

            cout<<endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    cout << "Elemen[" <<i<< "][" <<j<< "] = ";
                    cin >> mat2[i][j];
                }
            }
            cout<<endl;

        matout:
            cout<< "Matriks yang anda masukan : "<<endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    cout<<mat1[i][j] <<ends;;
                }
                cout<<endl;
            }
            cout<<endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    cout << mat2[i][j]<<ends;
                }
                cout<<endl;
            }
            cout<<endl;

            //hasil jumlah
            jumlah:
            cout << "Hasil dari penjumlahan matriks tersebut adalah : " <<endl;
             for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    jumlah [i][j] = mat1[i][j] + mat2[i][j];
                    cout <<  jumlah [i][j]<< ends;
                }
                cout<<endl;
            }
            cout<<endl;
            cout << "Lanjut?? ";
            cin >> ya;

            system ("cls");
            system ("PAUSE");

    if (ya == 'Y'||'y' ){
            goto menu;
        }else if(ya=='T'||'t'){
            goto akhir;
        }
        system ("cls");
        system ("PAUSE");
            //hasil kurang
            krg:
            cout << "Hasil dari Pengurangan matriks yang sudah anda inputkan adalah : " <<endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    kurang [i][j]= mat1[i][j] - mat2[i][j];
                    cout << kurang [i][j] <<ends;
                }
                cout<<endl;
            }
            cout<<endl;
            system ("cls");
            system ("PAUSE");

            if (ya == 'Y'||'y' ){
                goto menu;
            }else if(ya=='T'||'t'){
                goto akhir;
            }
            system ("cls");

            //hasil kali
            kli:
            cout << "Hasil dari Perkalian matriks yang sudah anda inputkan adalah : " <<endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    kali [i][j]= mat1[i][j] * mat2[i][j];
                    cout << kali [i][j] <<ends;
                }
            cout<<endl;
        }
        cout<<endl;
        system ("cls");
        system ("PAUSE");

        if (ya == 'Y'||'y' ){
            goto menu;
        }else if(ya=='T'||'t'){
            goto akhir;
        }
        system ("cls");

    //hasil traspose
            trs:
            cout << "Hasil dari Perkalian matriks yang sudah anda inputkan adalah : " <<endl;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    transpose [i][j]= mat1[i][j] = mat2[j][i];
                    cout << kali [i][j] <<ends;
                }
            cout<<endl;
        }
        cout<<endl;
    system ("cls");
    system ("PAUSE");

    if (ya == 'Y'||'y' ){
            goto menu;
        }else if(ya=='T'||'t'){
            goto akhir;
        }
        system ("cls");

        akhir:
        return 0;
}
