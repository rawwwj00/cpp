#include<iostream>
#include <string>

using namespace std;

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    string b=to_string(a);
    int c=b.size();
    string rev="";
    for (int i = c-1; i >= 0; i--)
    {
        rev+=b[i];
    }
    int final_int= stoi(rev);
    cout<<final_int;
    return 0;
}