#include <iostream>

//Nama : Bintang Rizqi Pasha
//Kelas : IF 09 B
//NIM : 21102056

using namespace std;

int main()
{
    //tampilkan semua nilai data/elemen dari array melalui pointer yang menunjuknya
    //untuk unguided 1
    int data[] = {1,2,3,4,5,6,7,8,9,10};//data
    //inisialisasi nilai array data ke pData
    int *pData = data;
    int *mypointer; //untuk re-inisialisasi nilai array

    //print nilai pData
    cout <<endl<< "Unguided 1"<<endl<<endl;
    for (int i=0;i<10;i++){
        cout << "Nilai data elemen ke-"<< i<< " : ";
        cout << pData[i]<< endl;
    }
    cout << endl;

    //untuk unguided 2
    //print alamat memori data dalam pData
    cout <<endl<<  "Unguided 2"<<endl<<endl;
    for (int i=0;i<10;i++){
        cout << "Alamat memori data ke-"<< i<< " : " ;
        cout << &pData[i]<< endl;
    }
    cout <<endl;

    //untuk unguided 3
    //untuk re-inisialisasi nilai pData pakai *mypointer
    cout <<endl<<  "Unguided 3"<<endl<<endl;
    for(int i=0;i<10;i++){
        //menetapkan alamat re-inisialisasi
        mypointer = &pData[i];
        if (i==0){
            *mypointer = 29;
        }if (i==2){
            *mypointer = 17;
        }else if (i==3){
            *mypointer = 12;
        }else if (i==6){
            *mypointer = 13;
        }else if (i==8){
            *mypointer = 67;
        }

        //print nilai pData
        cout << "Nilai data elemen ke-"<< i<< " : ";
        cout << pData[i]<<endl;
    }
    //selesai
    return 0;
}



