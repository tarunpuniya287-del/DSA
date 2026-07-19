#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums1 , int n , vector<int> &nums2 , int m){

    vector<int> merged;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(nums1[i]<=nums2[j]){
            merged.push_back(nums1[i]);
            i++;
        }
        else{
            merged.push_back(nums2[j]);
            j++;
        }
    }
    while(i<n){
        merged.push_back(nums1[i]);
        i++;
    }
    while(j<m){
        merged.push_back(nums2[j]);
        j++;
    }
    nums1=merged;
}

int main(){
    int n; cout<<"Enter the size: "; cin>>n;
    vector<int> nums1;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums1.push_back(ele);
    }
    int m; cout<<"Enter the size: "; cin>>m;
    vector<int> nums2;
    for(int i=0; i<m; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        nums2.push_back(ele);
    }
     merge(nums1, n, nums2, m);
     cout << "Merged Array: ";

     for(int x : nums1){
        cout << x << " ";
    }

    return 0;

   
}