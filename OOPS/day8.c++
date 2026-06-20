// inheritence in c++ means 1 class dusri class ki chize use karti hai bina use dobara likhe 
#include<iostream>
using namespace std;

class Vehicle{
    public:
    int topspeed;
    float milage;
    string name;
};

class scooty: public Vehicle{
    public:
};

class bike: public Vehicle{
    public:
};

class car: public Vehicle{
    public:
};
void display(scooty s){
    cout<<s.name<<" "<<s.topspeed<<" "<<s.milage<<" "<<endl;
}
// int main(){
//     scooty s1;
//     s1.name="Jupiter";
//     s1.topspeed=50;
//     s1.milage=12.5;
//     display(s1);

// }

// Multiple inheritence in c++ means 1 class multiple classes ki chize copy and use karti hai bina use dobara likhe 

#include<iostream>
using namespace std;

class cricketer{
    public:
    int runs;
    int avg;
};

class engineer{
    public:
    string domain;
    int experience;
};

class Tarun: public cricketer ,public engineer{
    public:
    string name;
};

void display(Tarun t){
    cout<<t.runs<<" "<<t.avg<<" "<<t.domain<<" "<<t.experience<<" "<<t.name<<endl;
}

// int main(){
//     Tarun t1;
//     t1.name="Tarun";
//     t1.domain="Web dev";
//     t1.experience=15;
//     t1.runs=20000;
//     t1.avg=4560;
//     display(t1);
//     return 0;
// }


class  calculator{
    public:

    void add(int a,int b){
        cout<<a+b;
    }
    void add(double a,double b){
        cout<<a+b;
    }
};

int main(){
   calculator c;
   c.add(5,8);
   cout<<endl;
   c.add(5.46 , 904.5);

}