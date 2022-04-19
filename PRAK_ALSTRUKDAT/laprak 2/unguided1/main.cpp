#include <iostream>
//Bintang Rizqi Pasha
//21102056
//IF 09 B
using namespace std;

//void insertionSort ()

int main()
{
    //deklarasi variabel
    int i;
    int maks=0, arr[5];

    //masukkan indeks array
    cout <<"Mencari nilai maks dari array[5]"<<endl;

    //user input array
    for (int x=0; x<5; x++){
        cout << "Input Elemen Array [" << x << "] = ";
        cin >> arr[x];
    }

    //program mencari nilai maks
    for (int x=0;x<5;x++){
        if (arr[x] > maks){
            maks = arr[x];
        }
    }
    //program menampilkan nilai maks user dri array
    cout << "Nilai maksimal : " << maks << endl;

    return 0;
}
