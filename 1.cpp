#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int n = q.size();
    for(int i = 1 ; i<=n;i++){
        int x  = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    display(a);
    int k = 5;
    int n = a.size();
    stack<int>st;
    for(int i  = 1 ; i <= k ; i++){
        int x  = a.front();
        a.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x  = st.top();
        st.pop();
        a.push(x);
    }
    if(k>n) k = k % n;
    for(int i = 1 ; i <= n - k ; i++ ){
        int x  = a.front();
        a.pop();
        a.push(x);
    }
    display(a);
}
