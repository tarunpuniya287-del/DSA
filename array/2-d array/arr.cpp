#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m; cout<<"Enter the rows: "; cin>>m;
    int n; cout<<"Enter the coloumns: "; cin >>n;
   vector<vector<int>> nums(m, vector<int>(n));
   cout << "Enter elements:\n";
     for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> nums[i][j];
        }
    }
    cout << "Matrix:\n";

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}
