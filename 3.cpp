#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
int main(){
Node a;
a.val=10;
Node b;
b.val=20;
Node c;
c.val=20;
a.next=&b;
b.next=&c;
cout<<a.next<<endl;
cout<<b.next<<endl;
cout<<c.next<<endl;
cout<<a.val<<endl;
cout<<b.val<<endl;
cout<<c.val<<endl;

}