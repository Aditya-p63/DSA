#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price: ";
    cin>>cp;

     int sp;
    cout<<"enter selling price: ";
    cin>>sp;
    int profit =0;
    if(sp>cp){
        cout<<"profit: ";
         profit =sp-cp;
    }
    else if (sp==cp){
        cout<<"no profit no loss";
    } 
    else{
        cout<<"loss";
        return 0;

    }
    cout<<profit;
    return 0;
}