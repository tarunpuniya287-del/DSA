#include<iostream>
#include<vector>
using namespace std;

void reversestring(vector<char> &s){
    int n=s.size();
    int l=0;
    int r=n-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<char> s;
    for(int i=0; i<n; i++){
        char ele; cout<<"Enter the character: "; cin>>ele;
        s.push_back(ele);
    }
    reversestring(s);
    for(int i=0; i<n; i++){
        cout<<s[i]<<" ";
    }cout<<endl;
}