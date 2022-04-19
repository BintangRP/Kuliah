#include <iostream>

using namespace std;

int main()
{
    int c; //mendeklarasikan variabel c sebagai indeks pengulangan

    c=0; //melakukan inisialisasi nilai terhadap variabel c

    while(c<5){
        cout << "Saya sangat menyukai C++"<<endl;
        c++;
        /*
        Statemen ini berguna untuk menaikkan nilai, dan setelah bernilai 5,
        maka pengulangan akan dihentikan
        */
    }
    return 0;
}
