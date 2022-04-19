#include <iostream>
//Bintang Rizqi Pasha
//21102056
using namespace std;

int main()
{
    //array multi dimensi
    //tipe_data nama_array [jumlah_elemen1][jumlah_elemen2]...[jumlah_elemen-N];

    //int arr[2][3][4];
    //panjang\lebar\tinggi

    //guided 1
    //array 3 dimensi
    int arr[2][3][4] =
    {
        { {1,1,1,1},{2,2,2,2},{3,3,3,3} },
        { {1,1,1,1},{2,2,2,2},{3,3,3,3} }
    };

    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for (int k=0;k<4;k++){
                cout << arr[i][j][k] <<ends;
            }
            cout <<endl;
        }
        cout <<endl;
    }
/*
    //guided2
    //array 4 dimensi
    int arr[2][3][4][2] = {{{{1,1},{1,1},{1,1},{1,1}},{{2,2},{2,2},{2,2},{2,2}},{{3,3},{3,3},{3,3},{3,3}}},{{{1,1},{1,1},{1,1},{1,1}},{{2,2},{2,2},{2,2},{2,2}},{{3,3},{3,3},{3,3},{3,3}}} };

    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for (int k=0;k<4;k++){
                    for(int l=0;l<2;l++){
                        cout << arr[i][j][k][l] <<ends;
                    }
                cout<<endl;
            }
            cout <<endl;
        }
        cout <<endl;
    }

    //buat laprak
    //guided3
    //program input array 3 dimensi
    //deklarasi array
    int arr[2][2][2];

    //input elemen
    for (int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            for (int z=0;z<2;z++){
                cout << "Input Elemen [" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout <<endl;
    }

    //output elemen
    for (int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            for (int z=0;z<2;z++){
                cout << "Elemen [" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
        cout <<endl;
    }
    //tampilan array
    for (int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            for (int z=0;z<2;z++){
                cout << arr[x][y][z]<<ends;
            }
            cout <<endl;
        }
        cout <<endl;
    }
    */
    return 0;
}
