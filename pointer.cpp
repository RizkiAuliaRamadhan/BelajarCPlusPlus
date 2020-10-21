#include <iostream>
using namespace std;

void pointer_integer(){
    int number[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
      cout<<"angka "<<number[i]<<" = "<<&number[i]<<endl;
    }
    
}
void pointer_string(){
    string hp[5] = {"sony","xiaomi","samsung","vivo","oppo"};

    for (int i = 0; i < 5; i++)
    {
      cout<<"huruf "<<hp[i]<<" = "<<&hp[i]<<endl;
    }
    
}

int main(){
    pointer_integer();
    cout<<"++++++++++++++++++++++++++++++\n";
    pointer_string();
    return 0;
}