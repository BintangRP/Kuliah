#include <iostream>

using namespace std;

int main()
{
    //bilangan X jumlah tujuan
    int x;

    //banyak array
    int n,length;
    int arr[100];

    //panjang array
    cout << "Masukkan banyak array : ";
    cin >> length;

    //untuk input nilai array
    for (n=0; n<length; n++){
        cout << "Array ke-" << n+1 << " : ";
        cin >> arr[n];
    }

    //input bil bulat yang diinginkan total penjumlahan
    cout << "Masukkan bilangan yang diinginkan untuk total dari penjumlahan : ";
    cin >> x;

    cout << "Pasangan dari penjumlahannya :";
    int a,e;
    a=0;
    while(a<length){
            e=0;
        while(e<length){
            if (x==(arr[a] + arr[e])){
                cout << "(" << arr[a] << ","<< arr[e]<< ")" ;
            }
            e++;
        }
        a++;
    }

    return 0;
}
