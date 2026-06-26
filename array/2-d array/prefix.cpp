// //  Prefix sum problems in 2-d arrays
// 1st approach with brute force where we used nested loop with T.C=O(n2);
// #include<iostream>
// #include<vector>

// using namespace std;

// int rectanglesum(vector<vector<int>>&nums,int l1, int r1, int l2, int r2){
//     int sum=0;
//     for(int i=l1; i<=l2; i++){
//         for(int j=r1; j<=r2; j++){
//             sum+=nums[i][j];
//         }
//     }
//     return sum;
// }

// int main(){
//     int m; cout<<"Enter rows for matrix A: "; cin>>m;
//     int n; cout<<"Enter col for matrix A: "; cin>>n;
//     vector<vector<int>> nums(m,vector<int>(n));
//     cout<<"Enter elements for matrix nums:\n";
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cin>>nums[i][j];
//         }
//     }
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;

//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cout<<nums[i][j]<<" ";
//         }cout<<endl;
//     }
//     int sum = rectanglesum(nums,l1,r1,l2,r2);
//     cout<<sum<<endl;
// }

#include<iostream>
#include<vector>

using namespace std;

int rectanglesum(vector<vector<int>> &nums,int l1, int r1, int l2, int r2){
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        for(int j=1; j<nums[0].size(); j++){
            nums[i][j]+=nums[i][j-1];
        }
    }
    for(int i=l1; i<=l2; i++){
        if(r1!=0){
            sum+=(nums[i][r2]-nums[i][r1-1]);
        }
        else{
            sum+=nums[i][r2];
        }  
    }
    return sum;
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
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<nums[i][j]<<" ";
        }cout<<endl;
    }
    int sum = rectanglesum(nums,l1,r1,l2,r2);
    cout<<sum<<endl;
}
