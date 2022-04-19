/*#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std;

    int pilih;
    string tanggal, x,y,user,pass;
    char judul[40];
    char catatan[200];

void gotoxy(short int x, short int y) { //Procedur mengatur tampilan layar bedasarkan koordinat x dan y

    COORD a = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void input_catatan (){
    system("cls");
    cout << "Judul Diary : ";
    cin.getline(judul, 40);
    cin.ignore(40, '\n');

    //input_tanggal();
    int hari, bulan, tahun;

    cout << "Masukan tanggal(dd/mm/yyyy) : ";

    gotoxy(32,1); cout << "/";
    gotoxy(35,1); cout << "/";
    gotoxy(30,1); cin >> hari;
    gotoxy(33,1); cin >> bulan;
    gotoxy(36,1); cin >> tahun;

    cout << " Catatan : ";
    cin.getline(catatan,200);
    cin.ignore(200, '\n');
}
void tampilan_catatan(){
    cout << "\tMenampilkan Data"<< endl;
    cout <<left <<setw(7)<<"NO" << setw(10)<<" Judul"<< setw(12)<< " Tanggal"<<setw(12)<< " Catatan\n";


}

string getpassword( const string& prompt = "Untuk Membuka Daftar, ENTER YOUR PASSWORD> " ){
  string result;

  // Set the console mode to no-echo, not-line-buffered input
  DWORD mode, count;
  HANDLE ih = GetStdHandle( STD_INPUT_HANDLE  );
  HANDLE oh = GetStdHandle( STD_OUTPUT_HANDLE );
  if (!GetConsoleMode( ih, &mode ))
    throw runtime_error(
      "getpassword: You must be connected to a console to use this program.\n"
      );
  SetConsoleMode( ih, mode & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT) );

  // Get the password string
  WriteConsoleA( oh, prompt.c_str(), prompt.length(), &count, NULL );
  char c;
  while (ReadConsoleA( ih, &c, 1, &count, NULL) && (c != '\r') && (c != '\n'))
    {
    if (c == '\b')
      {
      if (result.length())
        {
        WriteConsoleA( oh, "\b \b", 3, &count, NULL );
        result.erase( result.end() -1 );
        }
      }
    else
      {
      WriteConsoleA( oh, "*", 1, &count, NULL );
      result.push_back( c );
      }
    }

  // Restore the console mode
  SetConsoleMode( ih, mode );

  return result;
  }

int main()
{
    //password untuk buka diary
    string pw = "admin123";

    menu:
        system("cls");
    cout<<"===== MENU =====\n"<<endl;
    cout<<"1. Input Catatan\n";
    cout<<"2. Tampilkan Catatan\n";
    cout<<"3. Search Judul\n";
    cout<<"4. Exit\n";
    cout<<"Pilih : ";
    cin >> pilih;

    switch (pilih) {
    case 1 : {
        input_catatan();
        system("pause");
        main();
    break;
    }
    case 2 : {
        //tampilin catatan
        try {
            string password = getpassword( "Untuk Membuka Daftar, ENTER YOUR PASSWORD: " );
            if (pw == "admin123"){
                cout << "\nLogin Berhasil"<< endl;
                system("pause");
                system("cls");
                //nampilin catatan
                tampilan_catatan();
            } else {
                cout << "\nPassword salah masukkan lagi\n";
                system("pause");
                main();

            }
        }

        catch (exception& e){
            cerr << e.what();
            return 1;
        }
        break;
    }

    }
    return 0;
}
*/



#include<conio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct data{
char judul[20],tanggal[20],catatan[200];};
data batas[200];
int a,b,c,d;

void inputdata(){
    //b = banyak data
    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
    d=0;
    for(c=0;c<b;c++){
        d++;
        cout<<"\nData ke-"<<d<<endl;
        cin.ignore(1, '\n');
        cout<<"Judul\t: ";cin.getline(batas[a].judul, 20);
        //cin.ignore(1, '\n');
        cout<<"Tanggal [dd/mm/yyyy]\t: ";cin.getline(batas[a].tanggal, 20);
        cout<<"Cerita\t: ";cin.getline(batas[a].catatan, 200);
        a++;
    }
   system("cls");
}



void lihatdata(){
    int i,j;
    cout<<"\n================================Menampilkan Data===============================\n\n";
    cout<<"===============================================================================\n";
    cout<<"||\tNO\t||\tJUDUL\t||\tTANGGAL\t\t||\tIsi Cerita\t\n";
    j=0;
    for(i=0;i<a;i++){
        j++;
        cout<<"===============================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<batas[i].judul<<"\t||";
        cout<<batas[i].tanggal<<"\t\t||";
        cout<< setw(15) << batas[i].catatan<<"\t\t";cout<<endl;
    }
    cout<<"=============================================================================== ";getch();
    system("cls");
}

void hapusdata(){
    int x,y;
    cout<<"Hapus data ke-";cin>>x;
    y=x-1;
    a--;
    for(int i=y;i<a;i++){
        batas[i]=batas[i+1];
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
    getch();
    system("cls");
}

void editdata(){
    int k,l;
    cout<<"Masukan Data yang akan diedit : ";cin>>k;
    l=k-1;
    cout<<"Judul\t: ";cin>>batas[l].judul;
    cout<<"Tanggal [dd/mm/yyyy]\t: ";cin>>batas[l].tanggal;
    cout<<"Cerita\t: ";cin>>batas[l].catatan;
    lihatdata();
}

void caridata(){
    int i;

    string j,tujuan;
    cout << "Masukan judul yang ingin dicari (misal:ittp): ";cin >> j;
    for (i=0; i<b; i++){
        tujuan = batas[i].judul;
        if(tujuan.find(j)!= string::npos){
            cout<<"===============================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<batas[i].judul<<"\t||";
        cout<<batas[i].tanggal<<"\t\t||";
        cout<< setw(15) << batas[i].catatan<<"\t\t";cout<<endl;
        }
        system("pause");cout << endl;
    }
    cout<<"=============================================================================== ";
    getch();
}
int main()
{
    char ch; //membuat username dan password
	login:
	string user = "";
	string pass = "";
	cout << "\n\n\n\n\n\n\n\n";
	cout << "\t\t --------------- Program Aplikasi DIARY ------------------\n\n";
	cout << "\t\t -------------------- By Kelompok 1 ----------------------\n\n";
	cout << "\t\t --------------------- S1 IF 09 B ------------------------\n\n";
	cout << "\t\t\tUsername : "; cin>>user;
	cout << "\t\t\tPassword : ";
	ch = _getch();
    while(ch != 13){ //character 13 is enter
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout<<endl;
	if(user == "aku" && pass == "123"){
		cout << "\n\n Anda berhasil login. \n" << endl;
		system("pause");
		system("cls");
		goto mulaimenu;
	}else{
		cout<<" Password Anda Salah \n";
   	    system("pause");
   	    system("cls");
	 	goto login;
	}
	//end membuat username dan password


mulaimenu :

    int pilih;
    char w;
    cout<<"\n\n\n\n\n=============================PROGRAM Aplikasi Diary=============================";
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t     BY Kelompok 1\n\n";
    cout<<"\t\t      ASSALAMU'ALAIKUM, punten....";
    getch();system("cls");
    awal:
    cout << "\n================================ PILIHAN MENU =================================";
    cout << "\n1. Masukkan data";
    cout << "\n2. Hapus Data";
    cout << "\n3. Lihat Data";
    cout << "\n4. Edit Data";
    cout << "\n5. Cari Data";
    cout << "\n6. Keluar";
    cout << "\n\nMasukkan Pilihan : ";
    cin >> pilih;

    switch(pilih){
    case 1:
        system("cls");inputdata();goto awal;
        break;
    case 2:
        system("cls");hapusdata();goto awal;
        break;
    case 3:
        system("cls");lihatdata();goto awal;
        break;
    case 4:
        system("cls");editdata();goto awal;
        break;
    case 5:
        system("cls");caridata();getch();system("cls");goto awal;

        break;
    case 6:
        system("cls");
            cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
            cout<<"                         [Y]                         [N]                  \n"<<endl;
            cout<<"                                         ";cin>>w;
            if(w=='y'||w=='Y')
            {
                system("cls");
                cout<<"\n\n\n\n\n***** PROGRAM SELESAI *****";
            }
            else if(w=='n'||w=='N')
            {
                system("cls");goto awal;
            }

        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t     EDIT BY KELOMPOK 1\n\n";
        cout<<"\t\t\t        WASSALAMU'ALAIKUM";
        break;
    default:
        system("cls");cout<<"Masukkan Pilihan 1-6";getch();system("cls");goto awal;
        break;
    }
}

/*
//string::substr
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str="We think in genralities,but we live in details";

    string str2 = str.substr(0,5) + "..";

    size_t pos = str.find("live");

    string str3 = str.substr (6,10);

    cout << str2 << " "<<str3<<endl;
}
*/
