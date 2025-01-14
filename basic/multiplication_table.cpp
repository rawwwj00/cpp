//Program to print multiplication table of the number inputted

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"The multiplication table of "<<a<<" is:"<<endl;
    for (int i=1;i<11;i++){
        cout<<a<<'*'<<i<<" = "<<a*i<<endl;
    }
    return 0;
}