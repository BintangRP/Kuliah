#include <iostream>

using namespace std;

int main()
{
    int bil1, bil2, kpk;
    kpk = 0;


    cout << "Masukan bilangan ke-1 : "; cin >> bil1;
    cout << "Masukan bilangan ke-2 : "; cin >> bil2;
/*
    int i;
    for (i=1; i<=bil2; i++){
        kpk += bil1;        //kpk = kpk + bil1;
        if (kpk % bil2 == 0){
            cout << "KPK : " << kpk;
            break;
        }
    }
*/
    int i =1;
    while (i<=bil2){
        kpk += bil1;    //kpk = kpk + bil1;
        i++;

        if (kpk % bil2 == 0){
            cout << "KPK : " << kpk;
            break;
        }
    }
    return 0;
}
