#include<iostream>
#include<vector>
using namespace std;

void sortzeroes(vector <int> &v){
    int write_ptr=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]!=0){
            v[write_ptr]=v[i];
            write_ptr++;
        }
    }
    for(int j=write_ptr; j<v.size(); j++){
    v[j] = 0;
}


}


int main(){
    int n; cout<<"Enter size: "; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele; cout<<"enter the elements: "; cin>>ele;
        v.push_back(ele);
    }
    sortzeroes(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}


