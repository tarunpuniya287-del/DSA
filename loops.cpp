#include<iostream>
using namespace std;
int main(){
 
    for(int n=1; n<=5; n++){
       cout<<n<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++)
    cout<<"Hello world"<<endl;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Hello world"<<endl;
        cout<<"Hello dev"<<endl;
    }

}

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        if(i%2!=0)
        cout<<i<<endl;
    }
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    for(int i=19; i<=190; i+=19){
        cout<<i<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n*i<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
   for(int i=1; i<=2*n-1; i+=2){
    cout<<i<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=20; i++){
        if(i==3 || i==7) continue;
        cout<<i<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=100; i++){
        if(i%2==0) continue;
        cout<<i<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a no.";
cin >> n;

while(n != 0){
    cout << n;
    cin >> n;
}
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count; 
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no";
    cin>>n;
    int sum = 0;
    while(n!=0){
        int ld = n%10;
        n=n/10;
        sum+=ld;
    }
    cout<<sum;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no";
    cin>>n;
    int r = 0;
    while(n!=0){
        int ld = n%10;
        r*=10;
        r+=ld;
        n/=10;
    }
    cout<<r;
}