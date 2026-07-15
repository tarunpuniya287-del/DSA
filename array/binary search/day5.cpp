#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;
int missing(vector<int> &nums){
    int n = nums.size();
    unordered_set<int> s(nums.begin(),nums.end());
    for(int i=1; i<=n+1; i++){
        if(s.count(i)==0) {
            return i;
        }
    }
    return 1;

}

int main(){
    int n; cout<<"Enter the size:"; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements:"; cin>>ele;
        nums.push_back(ele);
    }
    int result = missing(nums);
    
    cout<<result<<" ";
    
}