#include<iostream>
using namespace std;
int main(){
    int var = 56;
    int* ptr = &var;
    cout<<"The value of a "<<var<<endl;
    cout<<"Address of var "<<&var<<endl;
    cout<<"Value stored in ptr "<<ptr<<endl;
    cout<<"Value pointed by ptr "<<*ptr<<endl;
    return 0;
}


