// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     vector<int> v;

//     for(int i=0; i<n; i++){
//         int ele;
//         cout<<"Enter the elements: ";
//         cin>>ele;
//         v.push_back(ele);
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// void sortZeroesAndOnes(vector<int> &v){
//     int zeroes_count=0;
//     for(int ele:v){
//         if(ele==0){
//             zeroes_count++;
//         }
//     }
//     for(int i=0; i<v.size(); i++){
//         if(i<zeroes_count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     vector<int> v;

//     for(int i = 0; i < n; i++) {
//         int ele;
//         cout << "Enter the element: ";
//         cin >> ele;

//         v.push_back(ele);
        
//     }
//     sortZeroesAndOnes(v);
//     for(int i = 0; i < n; i++) {
//     cout << v[i] << " ";
// }
// }


// #include<iostream>
// #include<vector>
// using namespace std;

//  void sortZeroesAndOnes(vector<int> &v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }
//         if(v[left_ptr]==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }
//     }
//     return;
   
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     vector<int> v;
//     for(int i=0; i<n; i++){
//          int ele;
//          cout<<"Enter the elements: ";
//          cin>>ele;
//          v.push_back(ele);
//     }
//     sortZeroesAndOnes(v);
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
   

// }



// #include<iostream>
// #include<vector>
// using namespace std;

// void sortOddsAndEvens(vector<int> &v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//             swap(v[left_ptr], v[right_ptr]);
//             left_ptr++; right_ptr;
//         }
//         if(v[left_ptr]%2==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }
//     return;
// }

//  int main(){
//         int n; cin>>n;
//         vector<int> v;
//         for(int i=0; i<n; i++){
//             int ele; cin>>ele;
//             v.push_back(ele);
//         }
//         sortOddsAndEvens(v);
//         for(int i=0; i<n; i++){
//             cout<<v[i]<<" ";
//         }
        
//     }








    #include<iostream>
#include<vector>
using namespace std;

void sortedArray(vector<int> &v){
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while(left_ptr <= right_ptr){ // <= karo, warna 1 element reh jaayega
        if(abs(v[left_ptr]) < abs(v[right_ptr])){
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }

    // ans ulta bana hai, to reverse karo
   
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int ele;
        cout << "Enter element " << i+1 << ": ";
        cin >> ele;
        v.push_back(ele); // ye line add ki
    }
    sortedArray(v);
    return 0;
}