//  You have given a sorted matrix , where each row is sorted find the row with the max no.1's of rows 

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maximumOnesRow(vector<vector<int>> &nums){

    int maxOnes=INT_MIN;
    int maxOnesRow= -1;
    int coloumns = nums[0].size();

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){

            if(nums[i][j]==1){
                int numberOfOnes = coloumns - j;
                if(numberOfOnes > maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;


}

int main(){
    int m; cout<<"Enter rows for matrix A: "; cin>>m;
    int n; cout<<"Enter col for matrix A: "; cin>>n;
    vector<vector<int>> nums(m,vector<int>(n));
    cout<<"Enter elements for matrix nums:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>nums[i][j];
        }
    }

    int res = maximumOnesRow(nums);
    cout<<res<<endl;

    return 0;
}
