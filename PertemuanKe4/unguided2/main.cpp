#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//deklarasi var1,var2,var3
	float x, y, hasil;

//membuat input user
	cout << "Masukkan bilangan yang akan dibagi : "; cin >> x;
	cout << "Masukkan bilangan pembagi : "; cin >> y;

	cout << endl;
//rumus output
	hasil = x / y;

//2 kondisi if untuk percabangan
	if (x != 0 && y != 0) {
    	cout << setiosflags(ios::fixed);
    	cout << "Hasil bagi : " << setprecision(2) << hasil << endl;
	}else{
    	cout << "Bilangan tidak boleh 0" << endl;
	}

	return 0;
}
