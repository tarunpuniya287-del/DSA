#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &nums , int first , int last){
    int pivot = nums[last];
    int i = first-1;
    int j = first;

    for(;j<last; j++){
        if(nums[j]<pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }

    swap(nums[i+1],nums[last]);
    return i+1;
}

void quicksort(vector<int> &nums , int first , int last){
    if(first>=last){
        return;
    }

    int pi=partition(nums,first,last);
    quicksort(nums,first,pi-1);
    quicksort(nums,pi+1,last);
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums.push_back(ele);
    }
    quicksort(nums,0,n-1);
    for(int i=0; i<n; i++){
        cout<<nums[i]<< " ";
    }cout<<endl;
}