#include <iostream>

using namespace std;

int main()
{
    int suhu;

    cout << "Masukan besarnya suhu : ";
    cin >> suhu;

    if (suhu <= 0){
        cout << "Pada suhu " << suhu << " derajat Celcius, air akan berwujud padat(es)";
    } else if (suhu > 0 && suhu < 100){
        cout << "Pada suhu " << suhu << " derajat Celcius, air akan berwujud cair";
    } else{
        cout << "Pada suhu " << suhu << " derajat Celcius, air akan berwujud gas";
    }

    return 0;
}
