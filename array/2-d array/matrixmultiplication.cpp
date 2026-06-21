#include<iostream>
#include<vector>

using namespace std;
int main(){
    int m; cout<<"Enter rows for matrix A: "; cin>>m;
    int n; cout<<"Enter col for matrix A: "; cin>>n;
    vector<vector<int>> A(m,vector<int>(n));
    cout<<"Enter elements for matrix A:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }

    int p; cout<<"Enter rows for matrix B: "; cin>>p;
    int q; cout<<"Enter col for matrix B: "; cin>>q;
    vector<vector<int>> B(p,vector<int>(q));
    cout<<"Enter elements for matrix B:\n";
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>B[i][j];
        }
    }
    if(n!=p){
        cout<<"Matrix multiplication is not possible:\n";
        return 0;
    }
    vector<vector<int>> C(m,vector<int>(q,0));
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            for(int k=0; k<n; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"\nResult Matrix: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}