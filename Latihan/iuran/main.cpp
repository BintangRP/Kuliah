#include <iostream>

using namespace std;

int main()
{
    int gaji, iuran, ptg;

    cout << "masukkan gaji kamu : (contoh 500000) "; cin >> gaji;

    if (gaji >= 4000000){
        iuran = 100000;
    } else if(gaji >=3000000 && gaji < 4000000){
        iuran = 70000;
    } else{
        iuran = 50000;
    }

    cout << "Gaji sebelum pototngan iuran BPJS : "<< gaji <<endl;
    cout<<endl;
    ptg = gaji - iuran;
    cout << "Gaji setelah potongan iuran BPJS : "<< ptg <<endl;
    return 0;
}
