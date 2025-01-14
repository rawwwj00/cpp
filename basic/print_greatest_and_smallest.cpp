#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter number of inputs: ";
    cin>>a;
    int arr[a]={};
    for (int i = 0; i < a; i++)
    {
        int b;
        cout<<"Enter number "<<i+1<<" : ";
        cin>>b;
        arr[i]=b;
    }
    int c=arr[0];
    int d=arr[0];
    for (int j = 0; j < a; j++)
    {
        if(arr[j]>c){
            c=arr[j];
        }
        else if(arr[j]<d){
            d=arr[j];
        }
    }
    cout<<"The greatest number among all is "<<c<<endl;
    cout<<"The smallest number among all is "<<d;
    return 0;
}