// classs is a user defined data type which has data member and member function . It is a blueprint of an object and object is a instance of a class.

#include<iostream>
using namespace std;

class student{

public:
       string name;
       int age;
       float gpa;
};

void display(student s){
    cout<<s.name<<" "<<s.age<<" "<<s.gpa<<endl;
}

void change(student &s){
    s.name="Rohit";
    s.age=24;
    s.gpa=9.0;
}

int main(){
    student s1;
    s1.name="Tarun";
    s1.age=22;
    s1.gpa=8.5;

    student s2;
    s2.name="Ram";
    s2.age=23;
    s2.gpa=7.9;

    change(s1);
    display(s1);
    display(s2); 
    change (s2);
    display(s2);
}




