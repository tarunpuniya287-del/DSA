#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n){
    vector<vector<int>> matrix(n, vector<int>(n));

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;

    int value=1;

    while(left<=right && top<=bottom){
        // Left to Right
        for(int i=left; i<=right; i++ ){
            matrix[top][i]=value++;
        }
        top++;
        
        // Top to Bottom
        for(int j=top; j<=bottom; j++){
            matrix[j][right]=value++;
        }
        right--;
        
        // Right to Left
        if(top<=bottom){
            for(int i=right; i>=left; i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }
        
        // Bottom to Top
        if(left<=right){
            for(int j=bottom; j>=top; j--){
                matrix[j][left]=value++;
            }
            left++;
        }
    }
    return matrix;
}


int main(){
    int n; cout<<"Enter the size: "; cin>>n;
   
   vector<vector<int>> matrix(n, vector<int>(n));

   matrix=createSpiralMatrix(n);
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}