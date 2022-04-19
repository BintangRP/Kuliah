#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int b;

    while(a>=1){
        b=1;
        while (b<=a){
            cout <<b*a<< " ";
            b++;
        }
        cout << endl;
        a--;
    }
    return 0;
}
