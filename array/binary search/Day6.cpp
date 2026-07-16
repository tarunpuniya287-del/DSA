#include<iostream>
#include<vector>
using namespace std;

int missingnumber(vector<int> &nums){
    int n = nums.size();
    int  actualsum = 0;
    for(int i=0; i<n; i++){
        actualsum+=nums[i];
    }
      int sum = n * (n + 1) / 2;
      int ans = sum-actualsum;
      return ans;
}

int main(){
    int n; cout<<"Enter the number: "; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums.push_back(ele);
    }
    int result = missingnumber(nums);
        cout<<result<<" ";

}