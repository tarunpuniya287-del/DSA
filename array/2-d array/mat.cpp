#include<iostream>
#include<vector>

using namespace std;

int numspecial(vector<vector<int>> &nums ){
    int m = nums.size();
    int n = nums[0].size();
    vector<int> rowcount(m,0);
    vector<int>colcount(n,0);

    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            if(nums[row][col]==1){
                 rowcount[row]++;
                 colcount[col]++;
            }
        }
    }

    int ans = 0; 
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            if(nums[row][col]==1){
                if(rowcount[row]==1 && colcount[col]==1){
                     ans++;
                }
            }
        }
    }
    return ans;

}


int main(){
    int m; cout<<"Enter rows for matrix A: "; cin>>m;
    int n; cout<<"Enter col for matrix A: "; cin>>n;
    vector<vector<int>> nums(m,vector<int>(n));
    cout<<"Enter elements for matrix nums:\n";
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            cin>>nums[row][col];
        }
    }

    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            cout<<nums[row][col]<<" ";
        }
        cout<<endl;
    }

    int result = numspecial(nums);
    cout<<result<<endl;

    return 0;
}