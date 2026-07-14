#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr1 = {1, 3,4};
    vector<int> arr2 = {2};
    
    int n1 = arr1.size();
    int n2 = arr2.size();
    
    vector<int> merged;  
    
    int i = 0, j = 0;
    
  
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    
    
    while(i < n1) {
        merged.push_back(arr1[i]);
        i++;
    }
    

    while(j < n2) {
        merged.push_back(arr2[j]);
        j++;
    }
    

    int m = merged.size();
    int low = 0;
    int high = m-1;
    while(low<high){
        int mid = low + (high-low)/2;
    }
    
    return 0;
}
