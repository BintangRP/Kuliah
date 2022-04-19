#include <iostream>
using namespace std;
int main()
{
    int i , hasil,a,n;
    hasil=1;
    cout<<"menghitung pangkat"<<endl;

    cout<<" masukan Input Bilangan : "; cin>>a;
    cout<<" masukan Input Pencacah : "; cin>>n;

    for (i=1; i<=n;i++){
        hasil = hasil * a;
    }
    cout<<"hasil pangkat adalah : "<<hasil;
    cout<<endl;
    return 0;
}
