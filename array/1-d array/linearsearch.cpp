#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,98,67,90,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter target: ";
    cin>>x;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<x<<" is present";
    else cout<<x<<" is not present";

}

class Solution {
public:
    
    int countdigits(int num){
        int count = 0;
        while(num > 0){
            num = num / 10;
            count++;
        }
        return count;
    }

    int findNumbers(vector<int>& nums) {
        int evencount = 0;

        for(int i = 0; i < nums.size(); i++){
            int digits = countdigits(nums[i]);
            if(digits % 2 == 0){
                evencount++;
            }
        }

        return evencount;
    }
};
