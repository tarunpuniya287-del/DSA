#include<iostream>
#include<climits>
#include<vector>

using namespace std;
int maxsum(vector<int> &nums){
    int n = nums.size();
    int maxsum = INT_MIN;
    int cursum = 0;
    for(int right=0; right<n; right++){
        cursum+=nums[right];
        maxsum = max(maxsum,cursum);
        if(cursum<0){
            cursum=0;
        }
    }
    return maxsum;
}
int main(){
    int n; cout<<"Enter the size: "; cin>>n; 
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums.push_back(ele);
    }
    int result = maxsum(nums);
    cout<<result<<" ";
}

