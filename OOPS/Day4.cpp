// // Copy constructor in C++

// #include<iostream>
// using namespace std;

// class cricketer{
//     public:
//     string name;
//     int runs;
//     float avg;

//     cricketer(string n, int r, float a){
//         name=n;
//         runs=r;
//         avg=a;
//     }
// };

// void display(cricketer c){
//     cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
// }

// int main(){
//     cricketer c1("Virat",25000,25.6);
//     cricketer c2=c1;
//     c2.name="Rohit";
//     display(c1);
//     display(c2);
//     return 0;
// }
// // This type of copy constructor is called shallow copy constructor. It creates a new object and copies the values of the data members of the existing object to the new object. However, if the data members are pointers, it will copy the pointer values, which means both objects will point to the same memory location. This can lead to issues such as double deletion when both objects are destroyed. In this example, since we are using simple data types (string, int, float), it works fine without any issues.



// This type pointer in c++

// #include<iostream>
// using namespace std;

// class cricketer{
//     public:
//     string name;
//     int runs;
//     float avg;

//     cricketer(string name, int runs, float avg){
//         this->name=name;
//         this->runs=runs;
//         this->avg=avg;

//         // This pointer is a special pointer that is available in all non-static member functions of a class. It points to the current object for which the member function is called. In this constructor, we are using the this pointer to differentiate between the data members and the parameters of the constructor, which have the same names. By using this->name, this->runs, and this->avg, we are assigning the values of the parameters to the corresponding data members of the current object.
//     }
// };

// void display(cricketer c){
//     cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
// }

// int main(){
//     cricketer c1("virat",25000,25.6);
//     display(c1);
//     return 0;
// }




// Function inside class in c++

// #include<iostream>
// using namespace std;

// class cricketer{
//     public:
//     string name;
//     int runs;
//     float avg;

//     cricketer(string name, int runs, float avg){
//         this->name=name;
//         this->runs=runs;
//         this->avg=avg;
//     }

//     void display(){
//         cout<<name<<" "<<runs<<" "<<avg<<endl;
//     }

//     int totalMatches(){
//         return runs/avg;
//     }
 
// };

// int main(){
//     cricketer c1("Virat", 25000, 25.6);
//     c1.display();
//     cout<<"Total Matches: "<<c1.totalMatches()<<endl;
//     return 0;
// }



// Object pointer in c++ defined as that stored the address of an object and can be used to access the member function and data members of the object using the arrow operator (->).

#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;

    cricketer(string n, int r, float a){
        name=n;
        runs=r;
        avg=a;
    }
};