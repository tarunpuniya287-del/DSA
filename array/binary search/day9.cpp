#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int  divisor(vector<int>& nums){
    int n = nums.size();
    int max_val = nums[0];
    int min_val = nums[0];
    int ans = 0;
    for(int i=0; i<n; i++){
        if(nums[i]>max_val){
            max_val = nums[i];
        }
        if(nums[i]<min_val){
            min_val = nums[i];
        }
    }
    ans = gcd(max_val,min_val);
    return ans;
    
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums.push_back(ele);
    }
    int result = divisor(nums);
 cout << result<<" ";

}