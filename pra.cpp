#include<iostream>
using namespace std;

// int fact(int n){
//     int f = 1;
//     for(int i = 1 ; i <= n ;i++){
//         f*=i;
//     }
//     return f;
// }

int main ()
{
    int x;
    cin>>x;
    int i = 2;
    for(;i<=x-1;)
    {   
        if(x%i==0)
        cout<<"no";
        else  cout<<"yes";
        i++;
    }
}