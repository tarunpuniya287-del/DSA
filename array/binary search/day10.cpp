#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int replacement(string &s , int k ){
    int n = s.length();
    unordered_map<char,int> map;
    int left =0,maxlen=0,maxfreq=0;
    for(int right=0; right<n; right++){
        char c = s[right];
        map[c]++;

        maxfreq = max(maxfreq,map[c]);

        while((right-left+1)-maxfreq>k){
            map[s[left]]--;
            left++;
        }
        maxlen = max(maxlen,right-left+1);
    }
    return maxlen;

}

int main(){
    string s; cout<<"Enter the characters: "; cin>>s;
    int k; cout<<"Enter the value of k: "; cin>>k;
    int result = replacement(s,k);
    cout<<result<<" ";
}