#include <iostream>

using namespace std;

int main()
{/*
    // Array satu dimensi
    int nilai[5] = {70,65,87,100,90};
    for (int i = 0;i<5;i++){
        cout << "Nilai "<< i+1 << " = " << nilai[i] <<endl;
    }
*/
    // Array dua dimensi
    int A[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout << A[i][j]<<ends; //ends untuk spasi
        }
        cout <<endl;
    }
/*
    // GUIDED 1
    int n;
    string nama[10],status[10];
    int nilai[10];

    cout << "Masukkan Jumlah Data = ";
    cin >> n;
    cout << endl;

    for (int i=0;i<n;i++){
        cout << endl;
        cout << "Data ke-" << i+1 <<endl;
        cout << "Masukkan Nama = ";
        cin >> nama[i];
        cout << "Masukkan Nilai = ";
        cin >> nilai[i];

        if (nilai[i]<=50){
            status[i]= "Tidak Lulus";
        }else {
        status[i] = "Lulus";
    }
    }

    cout << endl;
    cout <<"        DAFTAR NILAI MAHASISWA      "<<endl;
    cout <<"===================================="<<endl;
    cout <<" No.    Nama    Nilai     Status    "<<endl;
    cout <<"===================================="<<endl;

    for (int i=0; i<n;i++){
        cout << i+1 << "        "<< nama[i]<<"      "<< nilai[i]<<"     "<<status[i]<<endl;
        cout <<"===================================="<<endl;
    }


/*
    //Guided 2
    //Delarasi
    int A[3][5] = {{10,20,30,40,50},{50,40,30,20,10},{11,22,33,44,55}};

    int B[3][5] = {{11,22,33,44,55},{55,44,33,22,11},{10,20,30,40,50}};

    int C[3][5]; //Array untuk hasil matriks

    //Output Matriks A
    cout <<"Matriks A: "<<endl;
    for (int m=0; m<3;m++){
        for (int n=0; n<5;n++){
            cout <<A[m][n]<<ends;
        }
        cout <<endl;
    }
    cout << endl;

    //Output Matriks B
    cout << "Matriks B :"<<endl;
    for (int m=0; m<3;m++){
        for (int n=0; n<5;n++){
            cout <<B[m][n]<<ends;
        }
        cout<<endl;
    }
    cout <<endl;

    //Output Hasil
    cout << "Matriks C = A + B :"<<endl;
    for (int m=0; m<3;m++){
        for (int n=0; n<5;n++){
            C[m][n] = A[m][n] + B[m][n];
            cout << C[m][n]<<ends;
        }
        cout <<endl;
    }
    cout<<endl;
*/
    return 0;
}
