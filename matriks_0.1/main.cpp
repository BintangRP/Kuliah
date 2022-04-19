#include <iostream>

using namespace std;


int main()
{
    double a[2][2] = {{3,6},{-2,10}};
    double b[2][2], c[2][2];
    //penjumlahan dan pengurangan matriks

    cout << "1. Penjumlahan & Pengurangan matriks A dengan matriks B" << endl;
    cout<<endl << "matriks A :"<< endl;

    //matriks a
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j] - b[i][j];
            cout << a[i][j] << " " ;
        }
        cout << endl;
    }
    //determinan matriks a
    double det = a[0][0]*a[1][1]-a[0][1]*a[1][0];
    //adjoin matriks a
    double a2[2][2]; //deklarasi matriks adjoin
    a2[0][0] = a[1][1];
    a2[1][1] = a[0][0];
    a2[0][1] = a[0][1]*-1;
    a2[1][0] = a[1][0]*-1;
    //invers matriks a
    //matriks b
    cout <<endl<< "matriks B :"<< endl;
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b[i][j] = a2[i][j]/det;
            cout << b[i][j] << " " ;
        }
        cout << endl;
    }

    //matriks c
    //hasil penjumlahan
     cout <<endl<< "Jadi hasil penjumlahan (matriks C) adalah " << endl;
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " " ;
        }
        cout << endl;
    }

    //hasil pengurangan
    cout <<endl<< "Jadi hasil pengurangan (matriks C) adalah " << endl;
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " " ;
        }
        cout << endl;
    }

    cout <<endl<<"2. Kalikan matriks A dengan konstanta 5" <<endl;
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j]*5;
            cout << c[i][j] << " " ;
        }
        cout << endl;
    }

    cout << endl<< "3. Cari transpose dari matriks A"<<endl;
    double Tc[2][2]; //var untuk transpose matriks A
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            Tc[i][j] = a[j][i];
            cout << Tc[i][j] << " " ;
        }
        cout << endl;
    }

    cout << endl<< "3. Cari transpose dari matriks B"<<endl;
    //var untuk transpose matriks A
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            Tc[i][j] = b[j][i];
            cout << Tc[i][j] << " " ;
        }
        cout << endl;
    }

    cout << endl<< "5. Algoritma dan program dengan struktur data array untuk mengalikan 2 buah matriks"<<endl;
    //int a[2][2] = {{3,6},{-2,10}};
    //int b[2][2] = {{1,1},{1,1}};
    for (int i =0;i<2;i++){ //baris
        for(int j=0;j<2;j++){ //kolom
            c[i][j] = 0; //ditetapin nol
            for (int k=0;k<2;k++){
                c[i][j] +=  a[i][k] * b[i][k];
            }
            cout << c[i][j] << " ";//hasil dicetak
        }
        cout << endl;
    }
    return 0;
}
