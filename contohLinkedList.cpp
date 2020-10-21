#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int pil;

void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();

struct simpul
{
    char nim[10], nama[50];
    int umur;
    struct simpul *next;
}mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;

int main()
{
    do
    {
        system("cls");
        cout<<"==============================\n";
        cout<<"Contoh Program Linked List C++\n";
        cout<<"==============================\n";
        cout<<"1. Tambah data depan\n";
        cout<<"2. Tambah data belakang\n";
        cout<<"3. Hapus data depan\n";
        cout<<"4. Hapus data belakang\n";
        cout<<"5. Tampilkan data\n";
        cout<<"6. Selesai\n";
        cout<<"Pilih no 1 - 6\n";
        cin>>pil;
        pilih();
    }while(pil != 6);
    return 0;
}

void pilih()
{
    if(pil==1)
        tambah_depan();
    else if(pil==2)
        tambah_belakang();
    else if(pil==3)
        hapus_depan();
    else if(pil==4)
        hapus_belakang();
    else if(pil==5)
        tampil();
    else
        cout<<"selesai";
}

void buat_baru()
{
    baru = (simpul*)malloc(sizeof(struct simpul));
        cout<<"Input Nim        : ";
        cin>>baru->nim;
        cout<<"Input Nama       : ";
        cin>>baru->nama;
        cout<<"Input Umur       : ";
        cin>>baru->umur;
        baru->next=NULL;
}

void tambah_depan()
{
    buat_baru();
    if (awal==NULL)
    {
        awal=baru;
    }
    else
    {
        akhir->next=baru;
    }
    akhir=baru;
    akhir->next==NULL;
    cout<<endl<<endl;
    tampil();
}

void tambah_belakang()
{
    buat_baru();
    if(awal==NULL)
    {
        awal=baru;
        akhir=baru;
        akhir->next=NULL;
    }
    else
    {
        baru->next=awal;
        awal=baru;
    }
    cout<<endl<<endl;
    tampil();
}

void hapus_depan()
{
    if(awal==NULL)
        cout<<"kosong";
    else
    {
        hapus=awal;
        awal=awal->next;
        free(hapus);
    }
    cout<<endl<<endl;
    tampil();
}

void hapus_belakang()
{
    if(awal==NULL)
        cout<<"kosong";
    else if(awal==akhir)
    {
        hapus=awal;
        awal=awal->next;
        free(hapus);
    }
    else
    {
        hapus==awal;
        while(hapus->next!=akhir)
            hapus=hapus->next;
            akhir=hapus;
            hapus=akhir->next;
            akhir->next=NULL;
            free(hapus);
    }
    cout<<endl<<endl;
    tampil();
}

void tampil()
{
    if(awal==NULL)
        cout<<"kosong";
    else
    {
        bantu=awal;
        while(bantu!=NULL)
        {
            cout<<"     Nim  : "<<bantu->nim;
            cout<<"     Nama : "<<bantu->nama;
            cout<<"     Umur : "<<bantu->umur<<endl;
            bantu=bantu->next;
        }
    }
    getchar();
}








