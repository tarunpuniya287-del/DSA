#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void algorithm(vector <int> &nums){
    sort(nums.begin(),nums.end());
}

int main(){
    int n ;
    cout<<"Enter the size: ";
     cin>>n;

    vector<int> nums;
    for(int i=0; i<n; i++){
     int ele;
     cout<<"Enter the elements: ";
     cin>>ele;
     nums.push_back(ele);
    }
    algorithm(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }cout<<endl;
}

