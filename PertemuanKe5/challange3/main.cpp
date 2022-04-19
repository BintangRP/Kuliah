#include <iostream>

using namespace std;

int main()
{
    int a, b;
    a=10;

    while (a>=1){
        b=1;
        while (b<=a){
            cout << b*a << " ";
            b++;
        }
        cout << endl;
        a--;
    }
    return 0;
}
