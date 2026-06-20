include<iostream>
using namespace std;
int main(){
    int arr[] = {45,65,89,36};
    int sum = 0;
    cout<<"Elements in array: ";
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    cout<<endl;
    cout<<"Sum of the aray: "<<sum;
}