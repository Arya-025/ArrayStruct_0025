#include <iostream>
using namespace std;

// deklarasi array tanpa ukuran, wajib diisi datanya
int nilai[] = {1,2,4,7};

// deklarasi array dengan ukuran dan diberi nilai awal
int nilaidua[3] = {1,2,3};

// deklarasi array dengan ukuran, tanpa nilai awal
string nama[4];

int main()
{

    cout << "nilai array ke 3 = " << nilai[2] << endl;
    nilai[2] = 100;
    cout << "nilai array ke 3 = " << nilai[2] << endl;
}