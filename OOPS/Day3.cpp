#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    float gpa;

    Student(string s, int a, float g){
        name=s;
        age=a;
        gpa=g;
    }
};

void display(Student s){
    cout<<s.name<<" "<<s.age<<" "<<s.gpa<<endl;
}

int main(){
    Student s1("Tarun", 22, 8.5);
    Student s2("Ram", 23 , 7.9);

    display(s1);
    display(s2);
}


#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int price;
    string model;

    car(string s, int p, string m){
        brand=s;
        price=p;
        model=m;
    }
};
void display(car c){
    cout<<c.brand<<" "<<c.price<<" "<<c.model<<endl;
}

void discount(car &c){
    c.price=c.price-(c.price*10/100);
}

int main(){
    cout<<"Car details before applying discount: ";
    car c1("BMW", 5000000, "X5");
    display(c1);
    discount (c1);
    cout<<"Car details after applying discount: ";
    display(c1);
    return 0;

    
    

}


#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int salary;
    Employee(string n, int s){
        name=n;
        salary=s;
    }
};

void display(Employee e){
    cout<<e.name<<" "<<e.salary<<endl;
}

void change(Employee &e){
    e.salary=100000;
}

int main(){
    Employee e1("Tarun", 50000);
    display(e1);
    change(e1);
    display(e1);
    return 0;
}


#include<iostream>
using namespace std;

class BankAccount{
    public:
    string accountholder;
    int balance;

    BankAccount(string a , int b){
        accountholder=a;
        balance=b;
    }
};

void diposit(BankAccount &b, int amount){
    b.balance=b.balance+amount;
}

void withdraw(BankAccount &b, int amount){
    b.balance=b.balance-amount;
}

void display(BankAccount b){
    cout<<b.accountholder<<" "<<b.balance<<endl;
}

int main(){
    BankAccount b1("Tarun", 500000);
    display(b1);
    cout<<"Deposit amount:";
    int amount;
    cin>>amount;
    diposit(b1,amount);
    display(b1);
    cout<<"Withdraw amount:";
    cin>>amount;
    withdraw(b1,amount);
    display(b1);
    return 0;

}

//500000*10/100=50000