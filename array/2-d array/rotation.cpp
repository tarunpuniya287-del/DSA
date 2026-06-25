// You have given a matrix , turn it by 90 degree in a clock wise direction without using any extra space
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotateArray(vector<vector<int>> &nums){
    int n=nums.size();
    // first transpose 
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(nums[i][j],nums[j][i]);
        }
    }
    // reverse every row
    for(int i=0; i<n; i++){
        reverse(nums[i].begin(),nums[i].end());
    }
    
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<vector<int>> nums(n,vector<int> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>nums[i][j];
        }
    }
    rotateArray(nums);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<nums[i][j]<<" ";
        }cout<<endl;
    }
    return 0;

}