#include <iostream>
/*
Nama : Bintang Rizqi Pasha
Kelas : IF 09 B
NIM : 21102056
*/
using namespace std;

int main()
{
    //unguided 3
    //deklarasi array
    double A[2][2];

    //input nilai array user
    cout <<"Masukkan nilai array :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            cout << "nilai array baris "<< i+1 <<" kolom "<< j+1 <<" :";
            cin >> A[i][j];
        }
    }
    //tampilan matriks user
    cout <<endl<< "Matriks yang telah dibuat :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            cout << A[i][j]<<ends;
        }
        cout<<endl;
    }

    //adjoin matriks 2x2 user
    double A2[2][2]; //00 11
    A2[0][0] = A[1][1];
    A2[1][1] = A[0][0];
    A2[0][1] = A[0][1]*-1;
    A2[1][0] = A[1][0]*-1;

    //tampilan adjoin matriks
    cout<<endl << "Adjoin dari matriks :"<<endl;
    for (int i =0;i<2;i++){
        for (int j =0;j<2;j++){
            cout<< A2[i][j]<< ends;
        }
        cout << endl;
    }

    //determinan matriks
    double det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    cout << endl<<"Determinan dari matriks :"<< det<<endl;

    //invers dari matriks
    double invers[2][2];
    cout << endl<< "Invers dari matriks :"<<endl;
    for (int i =0;i<2;i++){
        //baris
        for (int j =0;j<2;j++){
            //kolom
            invers[i][j] = A2[i][j]/det;
            cout<< invers[i][j]<< ends;
        }
        cout << endl;
    }
    //program selesai
    return 0;
}
