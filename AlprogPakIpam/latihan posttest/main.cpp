
/*
PROGRAM LATIHAN 1
#include <iostream>

using namespace std;

int pencarian(int data [], int n, int k) {
    int posisi, i, ketemu;

    if (n <= 0)
        posisi = -1;
    else {
        ketemu = 0;
        i = 1;
        while ((i < n -1) && ! ketemu) {
            if (data [i] == k) {
            posisi = i;
            ketemu = 1;
            } else {
            i++;
            }if (!ketemu) {
            posisi = -1;
            }
        }
    }
    return posisi;
}
void printArray(int arr[], int a){

    cout << "Deret bilangan : ";
    for(int i = 0; i<a;i++ ){
        cout <<" "<< arr[i];
    }
}

void inputArray(int arr[],int a ){
    //a = length
    for (int i = 0; i<a; i++){
        cout << "Masukkan elemen ke-"<< i+1 << " = ";
        cin >> arr[i];
    }
}

int main()
{   //variiiiable
    int length,cari;
    int arr[length];
    //panjangggg
    cout <<"Masukkan banyaknya bilangan : " ;
    cin >> length;
    //tampilan boss
    cout << endl;
    inputArray(arr, length);
    cout << endl;
    //ngeprint aja
    printArray(arr, length);

    cout << endl;
    //buat nyari
    cout << "Masukkan bilangan yang akan dicari = ";
    cin >> cari;

    //posisisiii
    int posisi = pencarian(arr,length,cari);
    if (posisi != -1){
        cout << "Bilangan "<< cari << " ditemukan sebanyak " << posisi << endl;
    }else {
        cout << "Bilangann"<< cari << " tidak ditemukan";
    }

    return 0;
}

PROGRAM LATIHAN 1 PUNYA PUSPITA KARTIKA SARI
#include <iostream>

using namespace std;


int main()
{
    int bil,element,cari;

    cout << "Masukan bilangan = ";
    cin >> bil;
    int arr[bil];

    for (int i = 0; i< bil; i++){
        cout << "Masukan elemen ke-"<<i+1<<" = ";
        cin >>element;
        arr[i]={element};
        //cin >> arr[i];
    }

    cout<<"deret bilangan :";
    for (int i = 0; i< bil; i++){
        cout << arr[i]<<" ";
    }


    cout <<"\nmasukan angka yg dicari: ";
    cin>> cari;

    int posisi = 0;
    for (int i=0; i<bil ;i++)
            if (arr[i]==cari){
                posisi +=1 ;
            }

    cout <<"Anggka " << cari<<" ditemukan sebanyak "<< posisi << " kali ";

    return 0;
}

//PROGRAM LATIHAN 2 BUAT YG BACA PANJANG KALIMAT DENGAN TIDAK MEMBACA SIMBOL TITIK
#include <iostream>
#include <string>

using namespace std;


int main()
{
    string kalimat;//string buat kalimat
    int length; //length buat nentuin panjang si kalimat
    int jumlah; //jumlah buat total dari kalimat yg bukan titik

    cout <<"Masukkan karakter-karakternya : ";
    getline(cin,kalimat); //pake getline biar dapet simbolnya juga
    length = kalimat.length(); //panjang kalimat dibuat jadi bates

    for (int i = 0; i< length; i++){ //disini panjang kalimat jadi kek array gitu
        if(kalimat[i] != '.'){ //setiap kalimat yg ga ada titiknya
            jumlah++; // jumlah +1
        }
    }

    cout << "Panjang karakter : "<< jumlah;//jumlah setelah ditambahin ditampilin disini


    return 0;
}
*/
//PROGRAM OUTPUTAN [ANAK AYAM TURUN,MATI SATU TINGGAL, INDUKNYA]
#include <iostream>
#include <string>

using namespace std;


int main()
{
    int jumlah;

    cout << "Masukkan jumlah anak ayam : ";
    cin >> jumlah;

    //perulangan i = jumlah. Jika i lebih dari nol maka i dikurangi 1
    for (int i =jumlah; i>0; i--){
        cout << "Anak ayam turun "<< i /*dimasukin i nampilin jumlah*/<< ", mati satu tinggal "; //template dasar
        if(i - 1 == 0){//ketika i dikurang 1 jadi nol maka tinggal induknya
            cout << "induknya";
        } else {
            cout << i - 1;
        }
        cout << endl;
    }
    return 0;
}

/*
PROGRAM SEPERTI HURUF Z TETAPI MEMAKAI INTEGER
#include <iostream>


using namespace std;


int main()
{
    int jmlh;

    cout << "Masukkan jumlah : ";
    cin >>jmlh;

    cout << endl;
    for(int i =1 ; i<=jmlh; i ++){
        for (int j =1;j<= jmlh;j++){
            if (i == 1 || i == jmlh){
                cout << j << endl;
            }else if (j == jmlh-i){
                cout << jmlh -i << " ";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
*/
