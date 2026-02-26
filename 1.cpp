#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int power =1;
    for(int i=1;i<=m;i++){
        power = power*n;
    }    

    cout<<power;
}