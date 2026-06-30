#include<iostream>
using namespace std;

int maxprofit(int arr[] , int n){
    if(n==0) return 0;
    int maxprofit =0;
    int bestbuy = arr[0];

    for(int i=1; i<n; i++){
    if(arr[i]>bestbuy){
        maxprofit = max(maxprofit , arr[i]-bestbuy);
    }
    bestbuy = min(bestbuy , arr[i]);

}
return maxprofit;

}



int main(){
    int arr[6] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = maxprofit(arr,n);
    cout<<ans<<endl;
     
    return 0; 
}
