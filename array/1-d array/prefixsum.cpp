#include<iostream>
#include<vector>
using namespace std;

void runningsum(vector<int> &nums){
    int n=nums.size();
    for(int i=1; i<n; i++){
        nums[i]+=nums[i-1];
    }
    return;
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> nums ;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter  the elements : "; cin>>ele;
        nums.push_back(ele);
    }
    runningsum(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }cout<<endl;
}

