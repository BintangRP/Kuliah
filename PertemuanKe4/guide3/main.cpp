#include <iostream>

using namespace std;

int main()
{
    int bil;

    cout << "Masukan sebuah bilangan bulat yang akan diperiksa : ";
    cin >> bil;

    if (bil > 0){
        cout << bil << " adalah bilangan POSITIF";
    } else if (bil < 0) {
        cout << bil << " adalah bilangan NEGATIF";
    } else {
        cout << "Anda memasukan bilangan NOL";
    }
    return 0;
}
