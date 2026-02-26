// WAP to print the sum of all the even digits of a given number.

// Sample Input : 4556
// Output: 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int last;
    int x=n;
    int sum=0;
    while(n>0){
        last=n%10;
         n=n/10;
        if(last%2==0) {sum = sum+last;}
    }
    cout<<sum;
    return 0;
}
