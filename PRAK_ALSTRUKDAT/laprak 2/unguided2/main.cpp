#include <iostream>
//Bintang Rizqi Pasha
//21102056
//IF 09 B
using namespace std;

int main()
{

    //deklarasi variabel
    int i,j,k;


    //masukkan indeks array
    cout <<"Mencari nilai maks dari array multidimensi [x][y][z]"<<endl;
    cout << "Jumlah Array[?][][]   : ";cin >> i;
    cout << "Jumlah Array[" << i << "][?][]  : "; cin >> j;
    cout << "Jumlah Array[" << i << "][" << j << "][?] : "; cin >> k;\
    cout << endl;

    int arr[i][j][k];
    //input elemen
    for (int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            for (int z=0;z<k;z++){
                cout << "Input Elemen [" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout <<endl;
    }

    //output elemen
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            for (int z=0;z<k;z++){
                cout << "Elemen [" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
        cout <<endl;
    }

    //tampilan array
    for (int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            for (int z=0;z<k;z++){
                cout << arr[x][y][z]<<ends;
            }
            cout <<endl;
        }
        cout <<endl;
    }
    return 0;
}
