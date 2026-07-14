#include<iostream>
#include<vector>


using namespace std;

vector<int> productexceptitself(vector<int> &nums){
    int n = nums.size();
    
}

int main(){
    int n; cout<<"Enter the size:"; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements:"; cin>>ele;
        nums.push_back(ele);
    }

    productexceptitself(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }cout<<endl;

}