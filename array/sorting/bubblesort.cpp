#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele; cout<<"enter the elements: "; cin>>ele;
        v.push_back(ele);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}