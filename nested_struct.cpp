#include <iostream>
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;
};

struct mahasiswa
{
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main()
{
    mahasiswa mhs[2];
    for (int i = 0; i< 2; i++)
    {
        cout << "mahasiswa ke-" << endl;
        cout << "masukan nim = ";
        cin >> mhs[i].nim;
        cout << "masukan nama = ";
        cin >> mhs[i].nama;
        cout << "masukan kota =";
        cin >> mhs[i].alamat.kota;
    }
}