#include <iostream>

using namespace std;

int main()
{
	int menu;

	cout << "===== MENU LAYANAN BIAYA OPERASI =====" << endl;
	cout << "1. Biaya operasi Mata" << endl;
	cout << "2. Biaya operasi Jantung\n" << endl;

	cout << "Pilih program layanan : ";
	cin >> menu;
	cout << endl;

	if(menu == 1) {
    	cout << "- JENIS PENYAKIT MATA -" << endl;
    	cout << "=======================\n" << endl;
    	cout << "1. Katarak" << endl;
    	cout << "2. Plus / Minus" << endl;
    	cout << "3. Silinder\n" << endl;

    	cout << "Masukkan jenis penyakit mata : ";
    	cin >> menu;

    	switch(menu) {
	case 1:
    	cout << endl << "Anda memilih layanan Operasi mata Katarak" << endl;
    	cout << "=========================================" << endl;
    	cout << "Biaya operasi mata Katarak adalah Rp. 7.500.000" << endl;
    	break;
	case 2:
    	cout << endl << "Anda memilih layanan Operasi mata Plus / Minus" << endl;
    	cout << "=========================================" << endl;
    	cout << "Biaya operasi mata Plus / Minus adalah Rp. 5.000.000" << endl;
    	break;
	case 3:
  	  cout << endl << "Anda memilih layanan Operasi mata Silinder" << endl;
    	cout << "=========================================" << endl;
    	cout << "Biaya operasi mata Silinder adalah Rp. 4.000.000" << endl;
    	break;
	default:
    	cout << endl << "Maaf layanan tidak tersedia" << endl;
    	break;
    	}
	}
	else if(menu == 2) {
    	cout << "- JENIS PENYAKIT JANTUNG -" << endl;
    	cout << "==========================\n" << endl;
    	cout << "1. Jantung koroner" << endl;
    	cout << "2. Katup jantung" << endl;
    	cout << "3. Otot jantung\n" << endl;

    	cout << "Masukkan jenis penyakit jantung : ";
    	cin >> menu;

    	switch(menu) {
	case 1:
    	cout << endl << "Anda memilih layanan Operasi jantung koroner" << endl;
    	cout << "=========================================" << endl;
    	cout << "Biaya operasi jantung koroner adalah Rp. 500.000.000" << endl;
    	break;
	case 2:
    	cout << endl << "Anda memilih layanan Operasi katup jantung" << endl;
    	cout << "=========================================" << endl;
    	cout << "Biaya operasi katup jantung adalah Rp. 350.000.000" << endl;
    	break;
	case 3:
    	cout << endl << "Anda memilih layanan Operasi otot jantung" << endl;
    	cout << "=========================================" << endl;
    	cout << "Biaya operasi otot jantung adalah Rp. 450.000.000" << endl;
    	break;
	default:
    	cout << endl << "Maaf layanan tidak tersedia" << endl;
    	break;
    	}
	}else {
    	cout << "Maaf layanan tidak tersedia" << endl;
	}

	return 0;
}
