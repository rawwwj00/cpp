#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //let quadratic equation be " (a)x^2 + (b)x + c = 0:a "
    float a,b,c;
    cout<<"Enter coefficient of a^2: ";
    cin>>a;
    cout<<"Enter coefficient of a: ";
    cin>>b;
    cout<<"Enter constant: ";
    cin>>c;

    int D=((b*b)-4*a*c);
    if (D>0){
        cout<<"The roots are "<<(-b+sqrt(D))/(2*a)<<" and "<<(-b-sqrt(D))/(2*a);
    }
    else if (D<0){
        float img= sqrt(-D)/(2*a);
        float real=-b/(2*a);
        cout<<"The roots are "<<real<<"+("<<img<<")i"<<" and "<<real<<"-("<<img<<")i";
    }
    else{
        cout<<"The root is "<<-b/(2*a);
    }
    return 0;
}