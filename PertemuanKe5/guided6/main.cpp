#include <iostream>

using namespace std;

int main()
{
    int bil;
    int faktorial = 1;

    cout <<"Masukan bilangan yang akan dihitung : "; cin >> bil;

    int a = bil;
    cout << a<<"! = ";
    while (a>=1){
        faktorial *= a;
        if (a!=1){
            cout <<a<<" x ";
        }else {
            cout <<a<<" = ";
        }
        a--;
    }
    cout <<faktorial;
    return 0;
}
