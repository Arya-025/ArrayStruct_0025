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
        cout << "masukan provinsi =";
        cin >> mhs[1].alamat.provinsi;
    }

    cout << endl;
    cout << "menampilkan data" << endl;
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "mahasiswa ke-" << i + 1 << endl;
        cout << "nim = " << mhs[i].nim << endl;
        cout << "nama = " << mhs[i].nama << endl;
        cout << "kota = " << mhs[i].alamat.kota << endl;
        cout << "provinsi = " << mhs[i].alamat.provinsi << endl;
    }
}