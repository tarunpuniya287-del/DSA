  Print"*****" n no. of times
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows";
    cin>>m;
    for(int i=1; i<=m; i++){
        cout<<"****"<<endl;
    }
    return 0;
}



Print "*" n no. of times in column and rows

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter no of rows: ";
    cin>>m;

    int n;
    cout<<"Enter no of columns: ";
    cin>>n;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0; 
}

#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter no of square: ";
    cin>>m;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0; 
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}


