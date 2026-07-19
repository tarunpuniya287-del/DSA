#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int> &nums){
    int n = nums.size();
    
    for(int i=0; i<n-1; i++){
        if(nums[i]<nums[i+1]){
           return true;
        }
    }
    return false;
}
int main(){
    int n; cout<<"Enter the size:"; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums.push_back(ele);
    }
    bool result = check(nums);
    cout<<result<<" ";
}