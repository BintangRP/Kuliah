#include <iostream>

using namespace std;

int main()
{
	char vokal;

	cout << "Masukan sebuah huruf: ";
	cin >> vokal;

	if (vokal == 'a' || vokal == 'A' ||
    	vokal == 'i' || vokal == 'I' ||
    	vokal == 'u' || vokal == 'U' ||
    	vokal == 'e' || vokal == 'E' ||
    	vokal == 'o' || vokal == 'O'

    	)
    	{
      	cout << endl;
      	cout << "Huruf " << vokal << " adalah salah satu huruf vokal" << endl;
    	}
	else {
      	cout << endl;
      	cout << "Huruf " << vokal << " adalah huruf konsonan" << endl;
    	}

	return 0;
}

