#include <iostream>
using namespace std;
//membuat struct/record
struct data_smartphone
{
    /* data */
    string merek,spek;
    int harga;
};
//deklarasi variabel struct
data_smartphone smartphone1,smartphone2;

int main(){
    smartphone1.merek = "Xiaomi Redmi Note 3";smartphone1.spek="5.5 inc - ram 3gb - rom 32gb";smartphone1.harga= 900000;
    smartphone2.merek = "Nokia 6";smartphone2.spek="5.5 inc - ram 4gb - rom 64gb";smartphone2.harga=1800000;

    cout<<"Data Smartphone Rama Cell\n";
    cout<<"----------------------------------\n";
    cout<<"1\n";
    cout<<"Merek : "<<smartphone1.merek<<endl;
    cout<<"Spek : "<<smartphone1.spek<<endl;
    cout<<"Harga : "<<smartphone1.harga<<endl;
    cout<<"2\n";
    cout<<"Merek : "<<smartphone2.merek<<endl;
    cout<<"Spek : "<<smartphone2.spek<<endl;
    cout<<"Harga : "<<smartphone2.harga<<endl;
}

