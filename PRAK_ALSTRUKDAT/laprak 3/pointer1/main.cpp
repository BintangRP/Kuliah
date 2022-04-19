#include <iostream>

using namespace std;

int main()
{
    /*
    int a= 100;
    int *b = &a;
    //& untuk alamat pointer (ampersand)
    //* untuk nandain pointer (asterik)

    cout << b <<endl; //alamat memori 'a'
    cout << *b << endl; //print nilai 'a'
    */

    /*
    guided 1
    int v=7;
    int *p;

    cout << "Nilai v = "<< v << endl;
    cout << "Nilai p = "<< *p << endl; //nilai akan random
    cout << "Alamat v = "<< &v <<endl;
    cout << "Alamat p = "<< &p << endl;
    */
    /*
    int value1 =5, value2 =15;
    int *mypointer;

    cout << "Nilai value 1 = " << value1 <<endl;//cetak nilai awal 5
    cout << "Nilai value 2 = " << value2 <<endl;//cetak nilai awal 15
    cout << endl;

    //inisialisasi ulangan dengan pointer
    mypointer = &value1; //alamat pointer di value1
    *mypointer = 10; // ganti nilai value1 jadi 10 karena alamat mypointer sama

    mypointer == &value2; //alamat pointer di value2
    *mypointer = 20; //ganti nilai value2 jadi 20 karena alamat mypointer sama

    cout << "Nilai value1 = "<< value1<<endl; //print value1 nilainya 10
    cout << "Nilai valu2 = "<< value2<<endl; //print value2 nilainya 20
    */


    int data[] = {1,2,3,4,5};
    int *pData = data; //pData jadi array karena pointer trus nilai data di inisialisasi ke *pData

//    //jadi pData bakal bisa punya array yg sama kek data
//    cout << pData[0] <<endl;//nyoba akses array 0
//    cout << pData[1] <<endl;
//    cout << pData[2] <<endl;
//    cout << pData[3] <<endl;
//    cout << pData[4] <<endl;

    for (int i =2;i<5;i++){
        cout << pData[i]<<endl;
    }

    return 0;
}
