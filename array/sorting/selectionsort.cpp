#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int minidx=i;
        for(int j=i+1; j<n; j++){
            if(v[j] < v[minidx]){
                minidx=j;
            }
        }
        swap(v[i],v[minidx]);
    }
    

}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        v.push_back(ele);
    }
    selectionsort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
