// Write a C++ program to input any character
// and check whether it is the alphabet, digit or special
// character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter: ";
    cin>>ch;
    int y=(int)ch;
    if(y>=48 && y<=57){
        cout<<"digit";
    }
    else if((y>='a'&& y<='z') || (y>='A' && y<='Z')){
        cout<<"alphabet";
    }
    else{
        cout<<"special";
    }
}