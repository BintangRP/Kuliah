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
        cout << "Array ke-" << n<< " : ";
        cin >> arr[n];
    }

    return 0;
}
