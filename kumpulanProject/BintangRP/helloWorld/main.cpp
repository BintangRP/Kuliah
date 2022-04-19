//MANIPULATOR
//Nama : Bintang Rizqi Pasha
//NIM : 21102056
//Kelas : IF 09B

#include <iostream> //library input/ouput
#include <iomanip> //agar setiosflags tidak error

using namespace std; //agar tidak menambah std::

int main(){

    cout << "Baris ini tanpa endl";
    cout << "Manipulator endl"<< endl;
    cout << dec << 10 << endl;
    cout << hex << 10 << endl;
    cout << oct << 10 << endl;

    //setiosflags = mengatur format keluarannya
    //ios::fixed = mengatur keluarannya dalam bentuk desimal
    cout << setiosflags(ios::fixed);
    cout << setprecision(4) << 123.456789 << endl;

    return 0;
}
