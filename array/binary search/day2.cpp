#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> mp;
    mp["Naman"]=1234;
    mp["Divya"]=23456;
    mp.erase("Divya");
    for(auto element: mp){
        cout<<"Name-"<<element.first<<endl;
        cout<<"Phone-"<<element.second<<endl;
    }


}