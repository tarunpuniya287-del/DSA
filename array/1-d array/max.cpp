// #include<iostream>
// using namespace std;
// int main(){
//     int arr []= {4,8,6,7};
//     int n = sizeof(arr)/4;
    
//     int max_val= arr[0];
//     int min_val= arr[0];

//     for(int i=0; i<n; i++){
//         if(arr[i]>max_val){
//             max_val=arr[i];
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i]<min_val){
//             min_val=arr[i];
//         }
//     }
//     cout<<"Max value: "<<max_val<<endl;
//     cout<<"Min value: "<<min_val<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,5,8,7};
//     int n = sizeof(arr)/4;
//     int x = 6;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; i<n; i++){
//             if(arr[i]+arr[j]==x){
//                 cout<<arr[i]<<endl<<arr[j];
//             }
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,8,2,6,1};
//     int n = sizeof(arr)/4;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 cout<<"True";
//             }
//         }
//     }
// }


// #include<iostream>
// #include<string>

// using namespace std;

//     int countWords(string s){
//     int count =1;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]== ' '){
//             count++;
//         }
//     } 
//     return count;  
//     }
//     int main(){
//         string sentences[] = {"Hi i am tarun", "i am love", "i am greedy"};
//         int size = sizeof(sentences)/sizeof(sentences[0]);
//         string target = sentences[0];
//         for(int i=0; i<size; i++){
//         if(countWords(sentences[i]) >countWords(target)){
//             target = sentences[i];
//         }
//     }
//     cout<<"Sentences with max words : "<<target<<" "<<endl;
//     cout<<"Word count: "<<countWords(target)<<endl;

//     }



    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int arr[] = {-1 , 0 , 3, 5 , 9 , 12};
    //     int n = sizeof(arr)/4;
    //     int target;
    //     cout<<"Enter the value of target";
    //     cin>>target;
    //     int low = 0;
    //     int high = n-1;
    //     int result = -1;
    //     while(low<=high){
    //         int mid = (low+high)/2;
    //         if(arr[mid]==target){
    //             result = mid;
    //             break;
    //         }
    //         else if(arr[mid]>target){
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     if(result!=-1){
    //         cout<<"Element found at index: "<<result;
    //     } else{
    //         cout<<result;
    //     }
    // }


    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int arr[] = {1,2,2,3,4,4,5};
    //     int n = sizeof(arr)/4;
    //     int target;
    //     cout<<"Enter the target: ";
    //     cin>>target;
    //     int idx = -1;
    //     int low = 0;
    //     int high = n-1;
    //     while(low<=high){
    //         int mid=(low+high)/2;
    //         if(arr[mid]==target){
    //             if(mid>0 && arr[mid]==arr[mid-1]){
    //                 high=mid-1;
    //             }
    //             else{
    //                 idx=mid;
    //                 break;
    //             }
    //         }
    //         else if(arr[mid]>target){
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
            
    //     }
               
    // }




#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int n=sizeof(arr)/4;
    int first=-1;
    int last=-1;
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int low=0;
    int high=n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            if(mid>0 && arr[mid]==arr[mid-1]){
                high=mid-1;
            }
            else{
                first=mid;
                break;
            }
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    low=0;
    high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            if(mid<n-1 && arr[mid]==arr[mid+1]){
                low=mid+1;
            }
            else{
                last=mid;
                break;
            }
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      
    }
    cout<<"first occurance: "<<first<<endl;
    cout<<"last occurance: "<<last<<endl;
}