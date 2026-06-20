// Swap two numbers 
// Method 1 with using 3rd variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 6;
//     cout<<a<<" "<<b<<endl;
//     int c = a;
//      a = b;
//      b = c;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }


// Method 2 without using 3rd variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value of a ";
//     cin>>a;
//     int b;
//     cout<<"Enter the value of b ";
//     cin>>b;
//     cout<<a<<" "<<b<<endl;

//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<a<<" "<<b<<endl;
// }

// Method 3 using c++ liberary

#include <iostream>
#include <utility>   // for swap()

using namespace std;

int main() {

    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Before swap: " << a << " " << b << endl;

    // modern swap method
    swap(a, b);

    cout << "After swap: " << a << " " << b << endl;

    return 0;
}