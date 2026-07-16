#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
int substring(string &s){
    int n = s.length();
    unordered_map<char,int> map;
    int left =0 , maxlen = 0;
    for(int right=0; right<n; right++){
        char c = s[right];
        if(map.count(c) && map[c]>=left){
            left = map[c]+1;
        }
        map[c]=right;
        maxlen = max(maxlen,right-left+1);
    }
    return maxlen;
}
int main(){
    string s; cout<<"Enter the characters: "; cin>>s;
    int result = substring(s);
    cout<<result<<" ";

    
}