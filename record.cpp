#include <iostream>
using namespace std;
//membuat struct/record
struct data_mahasiswa
{
    /* data */
    int nim;
    string nama,jurusan;
};
//deklarasi variabel struct
data_mahasiswa mhs1,mhs2;

int main(){
    mhs1.nama = "rama";mhs1.nim=12231;mhs1.jurusan="TI";
    mhs2.nama = "rizki";mhs2.nim=123142;mhs2.jurusan="SI";

    cout<<"Data Mahasiswa Stimik Tunas Bangsa\n";
    cout<<"----------------------------------\n";
    cout<<"1\n";
    cout<<"Nama : "<<mhs1.nama<<endl;
    cout<<"NIM : "<<mhs1.nim<<endl;
    cout<<"Jurusan : "<<mhs1.jurusan<<endl;
    cout<<"2\n";
    cout<<"Nama : "<<mhs2.nama<<endl;
    cout<<"NIM : "<<mhs2.nim<<endl;
    cout<<"Jurusan : "<<mhs2.jurusan<<endl;
}

