#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int> &nums){
    if(nums.size()==0){
        return 0;
    }
    int i=0;
    for(int j=1; j<nums.size(); j++){
        if(nums[j]!=nums[i]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;


}


int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums.push_back(ele);
    }
    int k= removeduplicates(nums);
    cout<<"Unique count: "<<k<<endl;
    for(int i=0; i<k; i++){
        cout<<nums[i]<<" ";
    }cout<<endl;
    return 0;
}