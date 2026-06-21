#include<iostream>
#include<vector>

using namespace std;
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
    vector<vector<int>> Transpose(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            Transpose[i][j]=nums[j][i];
        }
    }
    cout<<"\nResult of transpose:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<Transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}