// // Vector in c++
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(20);


//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
       
//     }
//     v.pop_back();
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
  
//     cout<<v.size();

// }




#include <iostream>
#include<vector>
using namespace std;

class Vector{
    public:
    int size;
    int capacity;
    int*arr;

    Vector(){
        size=0;
        capacity=1;
        arr= new int[1];
    }
};

int main(){
    Vector v1;
}