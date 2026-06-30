#include<iostream>
using namespace std;

int main(){
   int x = 5;
   float y = 7.3;
   int *ptr1 = &x;
   float * ptr2 = &y;
    x = 7;

   cout
   <<x
   <<" "
   <<y<<" "
   <<&x<<" "
   <<&y<<" "
   <<ptr1<<" "
   <<ptr2<<" "
   <<*ptr1<<" "
   <<*ptr2<<" "
   <<&ptr1<<" "
   <<&ptr2;

    return 0;
}