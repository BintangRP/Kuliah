#include <iostream>
//Bintang Rizqi Pasha
//21102056
//IF 09 B
using namespace std;

int main()
{
    int pilih;
    double a[1][2][2],b[1][2][2],c[1][2][2],Ta[1][2][2],Tb[1][2][2],Tc[1][2][2],CC;
    char out;
    menu:
        system("cls");
        cout << "==============================="<<endl;
        cout << "       Kalkulator Matriks      "<<endl;
        cout << "==============================="<<endl;
        cout << "1. Input Matriks"<<endl;
        cout << "2. Penjumlahan matriks"<<endl;
        cout << "3. Pengurangan matriks"<<endl;
        cout << "4. Perkalian matriks"<<endl;
        cout << "5. Transpose matriks"<<endl;
        cout << "==============================="<<endl;
        cout << "Pilih Menu :"<<ends;
        cin >> pilih;

    switch(pilih){
        case 1:{
            //input matriks
            cout <<endl<< "Input matriks pertama"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for (int k =0;k<2;k++){
                        cout << "Input Elemen ["<< j <<"]["<< k <<"] : "<<ends;
                        cin >> a[i][j][k];
                    }

                }
            }

            cout <<endl<< "Input matriks kedua"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k =0;k<2;k++){
                        cout << "Input Elemen ["<< j <<"]["<< k <<"] : "<<ends;
                        cin >> b[i][j][k];
                    }
                }
            }
            system("pause");
            goto menu;
            break;
        }
        case 2:{
            //penjumlahan matriks
            cout <<endl<< "Matriks A"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k =0;k<2;k++){
                        cout << a[i][j][k]<<ends;
                    }
                    cout <<endl;
                }
            }

            cout <<endl<< "Matriks B"<<endl;
           for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k =0;k<2;k++){
                        cout << b[i][j][k]<<ends;
                    }
                    cout <<endl;
                }
            }

            cout <<endl<< "Hasil Penjumlahan Matriks A dan Matriks B"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k=0;k<2;k++){
                        c[i][j][k] = a[i][j][k] + b[i][j][k];
                        cout << c[i][j][k]<<ends;
                    }
                    cout <<endl;
                }
            }
            system("pause");
            goto menu;
            break;
        }
        case 3:{
            //pengurangan matriks
            cout <<endl<< "Matriks A"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for (int k=0;k<2;k++){
                        cout << a[i][j][k]<<ends;
                    }
                    cout << endl;
                }
            }

            cout <<endl<< "Matriks B"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k=0;k<2;k++){
                        cout << b[i][j][k]<<ends;
                    }
                    cout << endl;
                }
            }

            cout <<endl<< "Hasil Pengurangan Matriks A dan Matriks B"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for (int k=0;k<2;k++){
                        c[i][j][k] = a[i][j][k] - b[i][j][k];
                        cout << c[i][j][k]<<ends;
                    }
                    cout<<endl;
                }
            }
            system("pause");
            goto menu;
            break;
        }
        case 4:{
            //perkalian matriks

            cout <<endl<< "Matriks A"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for (int k=0;k<2;k++){
                        cout << a[i][j][k]<<ends;
                    }
                    cout << endl;
                }
            }

            cout <<endl<< "Matriks B"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k=0;k<2;k++){
                        cout << b[i][j][k]<<ends;
                    }
                    cout << endl;
                }
            }

            cout <<endl<< "Hasil Perkalian Matriks A dan Matriks B"<<endl;
            //rumus perkalian matriks
               for (int i=0;i<1;i++){
                   for (int j=0;j<2;j++){
                        for(int k=0;k<2;k++){
                            c[i][j][k] = 0;
                           for (int l=0;l<2;l++){
                                c[i][j][k] += (a[i][l][k]*b[i][j][l]);
                           }
                       }
                   }
                }
                //tampilin hasil perkalian matriks
                for (int i=0;i<1;i++){
                   for (int j=0;j<2;j++){
                        for(int k=0;k<2;k++){
                            cout <<c[i][j][k]<<ends;
                        }
                        cout <<endl;
                   }
                }
            system("pause");
            goto menu;
            break;
        }
        case 5:{
            //transpose matriks
            cout <<endl<< "Transpose Matriks A"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k=0;k<2;k++){
                        Ta[i][j][k] = a[i][k][j];
                        cout << Ta[i][j][k]<<ends;
                    }
                    cout <<endl;
                }
            }

            cout <<endl<< "Transpose matriks B"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for (int k=0;k<2;k++){
                        Tb[i][j][k] = b[i][k][j];
                        cout << Tb[i][j][k]<<ends;
                    }
                    cout <<endl;
                }
            }

            cout <<endl<< "Transpose Matriks C"<<endl;
            for(int i=0;i<1;i++){
                for (int j=0;j<2;j++){
                    for(int k=0;k<2;k++){
                        Tc[i][j][k] = c[i][k][j];
                        cout << Tc[i][j][k]<<ends;
                    }
                    cout <<endl;
                }
            }
            system("pause");
            goto menu;
            break;
        }
        default:{
            cout << "Menu tidak ada, apakah ingin keluar?"<<endl;
            cout << "(y/t) :"<<ends;
            cin >> out;
            if(out=='y'){
                cout << endl<<"Terima kasih sudah memakai program ini"<<endl;
                cout << endl;
                system("pause");system("cls");
            }else if(out =='t'){
                cout <<endl<< "Enter untuk melanjutkan memakai program ini"<<endl;
                system("pause");
                goto menu;
            }
            break;
        }
    }
    return 0;
}
