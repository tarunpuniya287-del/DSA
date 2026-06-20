// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int> &v , int l , int mid, int r){
//     int an = mid-l+1;
//     int bn = r-mid;

//     int a[an];
//     int b[bn];

//     for(int i=0; i<an; i++){
//         a[i]=v[l+i];
//     }
//     for(int j=0; j<bn; j++){
//         b[j]=v[mid+1+j];
//     }

//     int i=0; 
//     int j=0;
//     int k=l;

//     while(i<an && j<bn){
//         if(a[i]<b[j]){
//             v[k++]=a[i++];
//         }
//         else{
//             v[k++]=b[j++];
//         }
//     }
//     while(i<an){
//         v[k++]=a[i++];
//     }
//     while(j<bn){
//         v[k++]=b[j++];
//     }
// }

// void mergesort(vector<int> &v , int l , int r){
//     if(l>=r){
//         return;
//     }
//     int mid=(l+r)/2;
//     mergesort(v,l,mid);
//     mergesort(v,mid+1,r);
//     merge(v,l,mid,r);
// }

// int main(){
//     int n; cout<<"Enter the size: "; cin>>n;
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         int ele; cout<<"Enter the elements: "; cin>>ele;
//         v.push_back(ele);
//     }
//     mergesort(v,0,n-1);
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

// }



// #include<iostream>
// using namespace std; 
// void merge(int arr[],int array[],int m , int n){
//     int p1=m-1;
//     int p2=n-1;
//     int p3=m+n-1;

//     while(p2>=0){
//         if(p1>=0 && arr[p1]>array[p2]){
//             arr[p3]=arr[p1];
//             p1--,p3--;
//         }
//         else{
//             arr[p3]=array[p2];
//             p2--,p3--;
//         }
//     }
// }

// int main(){
//     int arr[6]={1,2,3};
//     int array[3]={2,5,6};

//     int m=3;
//     int n=3;

//     merge(arr, array, m, n);

//     for(int i=0; i<m+n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }


#include<iostream>
#include<vector>
using namespace std;

void sortzeroes(vector<int> &v){
    int n=v.size();
    int l=0;
    int r=n-1;
    int m=0;

    while(m<=r){
        if(v[m]==0){
            swap(v[l],v[m]);
            l++;
            m++;
        }
        else if(v[m]==1){
            m++;
        }
        else if(v[m]==2){
            swap(v[m],v[r]);
            r--;
        }
    }
}


int main(){
    int n; cout<<"Enter the size: "; cin>>n;
     vector<int> v;
    for(int i=0; i<n; i++){
        int ele; cout<<"Enter the elements: "; cin>>ele;
        v.push_back(ele);
    }
     sortzeroes(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}




