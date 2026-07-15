#include<iostream>
#include<vector>


using namespace std;

vector<int> productexceptitself(vector<int> &nums){
    int n = nums.size();
    vector<int> left(n,1);
    vector<int> right(n,1);
    vector<int> ans(n);

    for(int i=1; i<n; i++){
        left[i]=left[i-1]*nums[i-1];
    }
    for(int j=n-2; j>=0; j--){
        right[j]=right[j+1]*nums[j+1];
    }
    for(int k=0; k<n; k++){
        ans[k]=left[k]*right[k];
    }
    return ans;
}

int main(){
    int n; cout<<"Enter the size:"; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements:"; cin>>ele;
        nums.push_back(ele);
    }

    vector<int> result = productexceptitself(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }cout<<endl;
    
}