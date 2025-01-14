#include <iostream>
using namespace std;

int main(){
    int a,b,c ;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swap.."<<endl;
    cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b;
    return 0;
}