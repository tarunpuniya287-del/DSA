#include<iostream>
#include<vector>
#include<string>

using namespace std; 

bool isAnagram(string s1 , string s2){
    vector<int> frequency(26,0);

    if(s1.length() != s2.length()){
        return false;
    }
    for(int i=0; i<s1.length(); i++){
        frequency[s1[i]-'a']++;
        frequency[s2[i]-'a']--;
    }

    for(int i=0; i<26; i++){
        if(frequency[i]!=0){
            return false;
        }
    }
    return true;
           
}

int main(){

    string s1 , s2;
    cin>>s1>>s2;

    if(isAnagram(s1,s2)){
        cout<<"String is anagram";
    }
    else{
        cout<<"String is not anagram";
    }

    return 0;


}