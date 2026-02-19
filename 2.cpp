#include<iostream>
using namespace std;
int main(){
    float x;                                                    
    cout<<"enter a float number"<<endl;
    cin>>x;
    int y=(int)x;
    if(y<0) y=y-1;
    float z=x-y;
    cout<<z;
    return 0;
}