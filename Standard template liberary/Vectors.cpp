#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.pop_back();
    for(int val: vec){
        cout<<val;
       
        }
    cout<<endl;
    cout<<vec.capacity();
    cout<<endl;
    cout<<vec.size();
 
}



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int> vec;

// for(int i=1; i<=10; i++){
//     vec.push_back(i);
//     vec.pop_back(i);
//     cout<<"Enter the elements: "<<i<<endl;
//     cout<<i<<endl;
//     cout<<"Size: "<<vec.size()<<endl
//         <<" Capacity: "<<vec.capacity()<<endl;
// }
// }