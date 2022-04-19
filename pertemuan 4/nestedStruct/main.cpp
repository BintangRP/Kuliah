#include <iostream>

using namespace std;
//inisialisasi struct


int main()
{
    struct data_student{
        char name[20];
        int nim[8];
    };

    //buat struct baru untuk kelompok
    struct student_group{
        //nested struct
        //struct (nama struct 1) (sebutan);
        struct data_student chief;
        struct data_student member[2];
    }group[3];
    //inisialisasi penamaan group sekaligus 3

    for (int i=0;i<3;i++){ //i = no group
        cout << "\n\nGROUP"<< i+1;
        cout << "\n\nCHIEF"<< "\n\nName : ";
        cin >> group[i].chief.name;
        cout << "\tNIM : ";
        cin >> group[i].chief.nim;

        for (int j=0;j<2;j++){//j = no member
            cout << "\n\nMEMBER"<< j+1;
            cout << "\n\tName : ";
            cin >> group[i].member[j].name;
            cout << "\tNIM : ";
            cin >> group[i].member[j].nim;
        }
    }

    for (int i=0;i<3;i++){
        cout <<"\nGROUP" << i+1;
        cout << "\nChief : "<< group[i].chief.name;
        cout << " ("<<group[i].chief.NIM << ")";
        cout << "\nMember :";

        for (int j=0;j<2;j++){
            cout << "\n\t" << group[i].member[j].name;
            cout << " ("<< group[i].member[j].nim << ")";
        }
    }
    return 0;
}
