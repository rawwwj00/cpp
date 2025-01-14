#include<iostream>

using namespace std;

int main(){
    char a;
    cout<<"Enter an alphabet: ";
    cin>>a;
    bool isUpperVowel,isLowerVowel;
    isUpperVowel=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    isLowerVowel=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    if (!isalpha(a)){
        cout<<a<<" is not an alphabet.";
    }
    else if (isLowerVowel||isUpperVowel){
        cout<<a<<" is a vowel.";
    }
    else {
        cout<<a<<" is a consonant.";
    }
    return 0;
}