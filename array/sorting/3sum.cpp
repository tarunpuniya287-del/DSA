#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for(int i=0; i<n-2; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int l=i+1, r=n-1;

        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];

            if(sum==0){
                ans.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;

                
                while(l<r && nums[l]==nums[l-1]){
                    l++;
                }
                while(l<r && nums[r]==nums[r+1]){
                    r--;
                }
            }
            else if(sum<0) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element: ";
        cin>>nums[i]; 
    }

    vector<vector<int>> result = threeSum(nums);

    cout<<"Triplets:\n";
    for(auto &triplet : result){
        cout<<"[";
        for(int x : triplet) cout<<x<<" ";
        cout<<"] ";
    }
}