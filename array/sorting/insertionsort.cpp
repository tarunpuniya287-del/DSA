#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int j=i+1;
        while(j>=1 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
}

int main(){
    int n; cout<<"Enter the elements: "; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        v.push_back(ele);
    }
    insertionsort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}