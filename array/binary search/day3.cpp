#include<iostream>
#include <unordered_map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


     vector<vector<string>> validanagram(vector<string> &str){
        int n = str.size();
        unordered_map<string, vector<string>> map;
        for(int i=0; i<n; i++){
            string temp = str[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(str[i]);
        }
        vector<vector<string>> ans;
        for(auto&pair:map){
            ans.push_back(pair.second);
        }
        return ans;
        
    }

int main(){


    int n; cout<<"Enter the size: "; cin>>n;
    vector<string> str;
    for(int i=0; i<n; i++){
        string ele; cout<<"Enter the elements: "; cin>>ele;
        str.push_back(ele);
    }
    vector<vector<string>> result = validanagram(str);
     for(int i=0; i<result.size(); i++){
        cout<<"[ ";
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"] ";
    }
    cout<<endl;
}

//"act","pots","tops","cat","stop","hat"