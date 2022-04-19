#include <iostream>

using namespace std;

//deklarasi struct
struct data{
    char name[20],address[20];
    int salary;
} employee;

struct mhs{
    char nim[5],nama[15];
    float nilai;
};

struct mhs mahasiswa[3];
//inisialisasi data dgn employee
//data employee;

int main()
{
    //panggil struct data
    cout << "Employee name : "<<ends;
    //akses struct yang udh dibuat
    cin >> employee.name;

    cout <<endl<< "Employee address :"<<ends;
    cin >> employee.address;
    cout <<endl<< "Employee salary :"<<ends;
    cin >> employee.salary;

    //output dari input user
    cout <<endl<< "employee data :"<<ends;
    //panggil data yg udh ada
    cout << employee.name << ", ";
    cout << employee.address << ", ";
    cout << employee.salary<<endl;


    return 0;
}
