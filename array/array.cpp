// #include<iostream>
// using namespace std;
// int main(){
//     cout<< "Array value: ";
//     int arr[5]={10,56,32,45,23};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
// }
//         cout<<endl;
//     cout<<"Reverse an array: ";
//     for(int i=4; i>=0; i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {40,50,14,68};
    int n = sizeof (arr)/4;
    cout<<"Element of arr: ";
    for(int i=n; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}







