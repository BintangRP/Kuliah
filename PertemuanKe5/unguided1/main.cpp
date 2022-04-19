#include <iostream>

using namespace std;

int main()
{
    int bil,aritmatik;

    cout << "Masukan bilangan = "; cin>> bil;

    int a = bil;
    cout << "Total nilai = ";

    while(a>0){
        aritmatik += a; //aritmatik = aritmatik + a
        if (a != 1){
            cout <<a<<" + ";
        }else{
            cout <<a<<" = ";
        }
        a--; //menurunkan nilai variabel a
    }
    cout <<aritmatik;


    return 0;
}
