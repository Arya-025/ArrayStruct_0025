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

    // mengisi array dengan menggunakan looping for
    for (int i = 0; i < 4; i++)
    {
        cout << "masukkan nama ke " << i + 1 << " = ";
        cin >> nama[i];
    }

    cout << endl;
    cout << "menampilkan array nama" << endl;
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "nama ke " << i + 1 << nama[i] << endl;
    }
}