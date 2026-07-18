#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool permutation(string &s1 , string &s2){
    if(s1.length()>s2.length()) return false;
    sort(s1.begin(),s1.end());
    for(int i=0; i<=s2.size()-s1.size(); i++){
        string sub = s2.substr(i,s1.size());
        sort(sub.begin(),sub.end());
        if(sub==s1) return true;
    }
    return false;

}
int main(){
    string s1; cout<<"Enter the character: "; cin>>s1;
    string s2; cout<<"Enter the character: "; cin>>s2;
    bool result = permutation(s1,s2);
    cout<<result<<" ";
}