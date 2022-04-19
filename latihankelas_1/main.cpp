#include <iostream>

using namespace std;

int main()
{
    /*
    int a[5];
    int *p;

    a[0]=24;
    a[1]=32;
    a[2]=81;
    a[3]=44;
    a[4]=23;
    p=&a[0];

    cout << "alamat p adalah "<< p<<endl;
    cout <<"nilai p : "<<*p<<endl;
    */
    /*
    void *p;
    int a=10;
    double b=23.4;
    char c='s';

    p=&a;
    cout << "alamat (a-10) = " <<p<<endl;
    p=&b;
    cout <<"alamat (b=23.4) = "<<p<<endl;
    p=&c;
    cout<<"alamat (c='s') = " <<p<<endl;
    */

    //new dataType;
    //new dataType[intExp];
    int a[]={5,15,25,43,12,1,7,89,32,11};
    int *p = &a[1], *q = &a[5];

    cout << "hasil *(p+3) = " << *(p+3) <<endl;
    cout << "hasil *(q-2) = " << *(q-2) <<endl;
    cout << "hasil q-p = " << q-p <<endl;

    cout << (p>q) <<endl;
    cout << (*p>*q) << endl;
    if(p>q){
        cout <<"TRUE ini muncul"<<endl;
    }
    if(*p>*q){
        cout <<"TRUE ini muncul"<<endl;
    }

    return 0;
}
