#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>> &nums){
    int left=0;
    int right=nums[0].size()-1;
    int top=0;
    int bottom=nums.size()-1;

    int direction = 0;
    while(top<=bottom && left<=right){    
        if(direction==0){
            for(int col=left; col<=right; col++){
                cout<<nums[top][col]<<" ";
            }
            top++;
        }
        else if(direction==1){
            for(int row=top; row<=bottom; row++){
                cout<<nums[row][right]<<" ";
            }
            right--;
        }
        else if(direction == 2){
            for(int col=right; col>=left; col--){
                cout<<nums[bottom][col]<<" ";
            }
            bottom--;
        }
        else{
            for(int row=bottom; row>=top; row--){
                cout<<nums[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;
    }
}

int main(){
    int m; cout<<"Enter rows for matrix A: "; cin>>m;
    int n; cout<<"Enter col for matrix A: "; cin>>n;
    vector<vector<int>> nums(m,vector<int>(n));
    cout<<"Enter elements for matrix A:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>nums[i][j];
        }
    }
    spiralOrder(nums);
}