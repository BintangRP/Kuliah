#include <iostream>

using namespace std;
void nilaiAkhir(float *nilai_akhir, float uts, float uas,float kuis){
    *nilai_akhir = (uts*0.35) + (uas*0.35) + (kuis*0.3);
}
int main()
{
    float hasil,uts,uas,kuis;

    cout <<"masukkan nilai uts: ";
    cin >> uts;
    cout <<"masukkan nilai uas: ";
    cin >> uas;
    cout <<"masukkan nilai kuis: ";
    cin >> kuis;

    cout << endl;

    cout << "nilai akhir adalah ";
    nilaiAkhir(&hasil, uts, uas,kuis);
    cout << hasil;

    return 0;
}

