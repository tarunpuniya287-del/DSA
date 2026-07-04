// #include<iostream>
// #include<string>
// using namespace std;
//  int main(){
//     string name;
//     getline(cin,name);
//     cout<<name<<endl;
//     return 0;
//  }


// #include<iostream>
// #include<string>
// using namespace std;
//  int main(){
//     string s1 = "Tarun";
//     string s2 = "Puniya";
//     cout<<s1+s2<<endl;
//     return 0;
//  }

// #include<iostream>
// #include<string>
// using namespace std;
//  int main(){
//     string s1 = "abcd";
//     char ch = 'e';
//     s1.push_back(ch);
//     cout<<s1<<endl;
//     return 0;
//  }


 // sORT AN GIVEN STRING

 #include <iostream>
 #include <string>
 #include <vector>

 using namespace std;

string countSort(string str){
   vector<int> frequency(26,0);
   for(int i=0; i<str.length(); i++){
      int idx = str[i]-'a';
      frequency[idx]++;
   }
   int j=0;

   for(int i=0; i<26; i++){
      while(frequency[i]--){
         str[j++] = i+'a';
      }
   }
   return str;
}

 int main(){
   string str;
   cin>>str;

   cout<<countSort(str)<<endl;
 }