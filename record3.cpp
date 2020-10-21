#include <iostream>
using namespace std;

int main()
{
    //record
    struct mahasiswa
    {
        /* data */
        string nama,nim,jurusan;
    };
    mahasiswa mhs;
    //penutup record

    cout << "Masukan Data Mahasiswa\n";
    cout << "Masukan Nama = ";
    cin >> mhs.nama;
    cout << "Masukan Nim = ";
    cin >> mhs.nim;
    cout << "Masukan Jurusan = ";
    cin >> mhs.jurusan;

    cout << "\n" << "Data Mahasiswa " << endl;
    cout << "Nama       = " << mhs.nama << endl;
    cout << "Nim        = " << mhs.nim << endl;
    cout << "Jurusan    = " << mhs.jurusan << endl;

    return 0;
}