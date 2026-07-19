#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int> &nums){
    int n = nums.size();
    int count = 0;
    for(int i=0; i<n; i++){
        if(nums[i]>nums[(i+1)%n]){
            count++;
        }
    }
    return count<=1;
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