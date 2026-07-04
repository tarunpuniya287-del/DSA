// #include<iostream>

// using namespace std;

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
//     int n; cout<<"Enter the value of n: ";  cin>>n;
//     int result = factorial(n);
//     cout<<result<<endl;
//     return 0;
// }

// Program to find nth fibonacci number
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1) + fib(n-2);

}

int main(){
    int n; cout<<"Enter the nth term: "; cin>>n;
    int result = fib(n);
    cout<<result<<endl;
    return 0;
}
