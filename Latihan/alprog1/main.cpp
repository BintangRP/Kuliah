#include <iostream>

using namespace std;

int main()
{
   //asumsi bilangan bulat

    int nilai;

    cout << "Masukkan nilai ulangan : ";
    cin >> nilai;

    cout<<endl;
    cout<<"Program menentukan nilai ulangan kamu A/B/C"<<endl;
    cout<<endl;

    if( nilai >100){
        cout<<"masukkan nilai dengan interval 0-100";
    }else if ( nilai >= 80){
        cout<<"nilai kamu A";
    }else if( nilai >= 60){
        cout<<"nilai kamu B";
    }else if(nilai >= 0){
        cout<<"nilai kamu C";
    }
    else{
        cout<<"masukkan nilai dengan interval 0-100";
    }
    return 0;
}
