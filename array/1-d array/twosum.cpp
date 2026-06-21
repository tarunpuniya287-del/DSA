// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n; cout<<"Enter the size: "; cin>>n;
//     int target; cout<<"Enter the target: "; cin>>target;

//     vector<int> v;
//     for(int i=0; i<n; i++){
//         int ele; cout<<"Enter the elements: "; cin>>ele;
//         v.push_back(ele);
//     }
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(v[i]+v[j]==target){
//                 break;
//             }
//             else{
//                 cout<<"target not found :";
//             }
//         }
//     }
//     cout<<"target found: "<<target;

// }



#include<iostream>
#include<vector>
using namespace std;

void giveIndexes(vector<int> &v){
    int target; cout<<"Enter target: "; cin>>target;
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr] + v[right_ptr]==target){
           cout << left_ptr << " "<<right_ptr;
           return;

        }
         if((v[left_ptr] + v[right_ptr]>target)){
            right_ptr--;
        }
        if((v[left_ptr] + v[right_ptr]<target)){
            left_ptr++;
        }

    }
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
     vector<int> v;
     for(int i=0; i<n; i++){
         int ele; cout<<"Enter the elements: "; cin>>ele;
        v.push_back(ele); 
     }
     giveIndexes(v);

}
