// The concept of constructor defines a special member function of class which is automaticaaly called when an object is created

#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int price;
    string model;
    float milage;
    int seats;

    // constructor
    car (string b, int p, string m, float mi, int s){
        brand=b;
        price=p;
        model=m;
        milage=mi;
        seats=s;
    }
};

void display(car c){
    cout<<c.brand<<" "<<c.price<<" "<<c.model<<" "<<c.milage<<" "<<c.seats<<endl;
}

void change(car &c){
    c.brand="Audi";
    c.price=250000;
}

int main(){
    car c1("BMW", 5000000, "X5", 10.5, 5);
    cout<<c1.brand<<" "<<c1.price<<" "<<c1.model<<" "<<c1.milage<<" "<<c1.seats<<endl;

    car c2("Mercedes", 6000000, "C-Class", 12.0, 5);
    display(c2);
    change(c2);
    display(c2);
    return 0;
}
