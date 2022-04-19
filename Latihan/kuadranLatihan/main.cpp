#include <iostream>

using namespace std;

int main()
{
    int x,y;

    cout <<"Masukkan nilai x : ";
    cin >> x;

    cout <<"Masukan nilai y : ";
    cin >> y;

    cout << endl;

    //kondisi x,y pada kuadran
    if (x > 0 && y > 0){
        cout << "x,y berada pada kuadran 1";
    } else if(x < 0 && y > 0){
        cout << "x,y berada pada kuadran 2";
    } else if(x < 0 && y < 0){
        cout << "x,y berada pada kuadran 3";

        //kondisi x,y pada sumbu
    }else if (x == 0 && y == 0){
        cout << "x,y berada pada sumbu pusat (0,0)";
    }else if (x >0 && y == 0){
        cout << "x,y berada pada sumbu x";
    }else if (x == 0 && y > 0){
        cout << "x,y berada pada sumbu y";
    }else if (x < 0 && y == 0){
        cout << "x,y berada pada sumbu x";
    }else if (x == 0 && y < 0){
        cout << "x,y berada pada sumbu y";
    }else {
        cout << "x,y berada pada kuadran 4" <<endl;
    }
    return 0;
}
