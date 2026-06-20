#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//     int n; cout<<"Enter the size: "; cin>>n;
//     vector <char> alpha;
//     for(int i=0; i<n; i++){
//         char ele; cout<<"Enter the elements: "; cin>>ele;
//         alpha.push_back(ele);
//     }
//     for(int i=0; i<n; i++){
//         cout<<alpha[i]<<" ";
//     }cout<<endl;
// }

void reversestring(string &s){
    int i=0; 
    int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}


int main(){
    string s="abcdef";
    reversestring(s);
    cout<<s;
}