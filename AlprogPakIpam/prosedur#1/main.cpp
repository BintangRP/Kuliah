#include <iostream>

using namespace std;

void Tukar(int *A, int *B){
    int tmp;

    tmp = *A;
    *A = *B;
    *B = tmp;
}

int main()
{
    int nilai1, nilai2;

    scanf("%d", &nilai1);
    scanf("%d", &nilai2);
    cout << endl;
    printf("Nilai 1 sebelum pertukaran = %d", nilai1);
     cout << endl;
    printf("Nilai 2 sebelum pertukaran = %d", nilai2);
    cout << endl;
    cout << endl;

    Tukar(&nilai1, &nilai2);

    printf("Nilai 1 sebelum pertukaran = %d", nilai1);
     cout << endl;
    printf("Nilai 2 sebelum pertukaran = %d", nilai2);

    return 0;
}
*/
