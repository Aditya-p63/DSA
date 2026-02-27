
#include<iostream>
#include<vector>
using namespace std;
vector<int> so(vector<int>&a,vector<int>&b) {
	int n=a.size();
    int m=b.size();
    vector<int> re(m+n);
    int i=0;int k=m+n-1,j=0;
    while(i<=n-1 && j<=m-1){
        if(a[i]>b[j]){ re[k]=b[j];
        k--;j++;}
        else{//b[j]>a[i]
            re[k]=a[i];
            k--;
            i++;
        }
    }
    if(i==n){
        while(j<=m-1){
            re[k]=b[j];
            k--;
            j++;
        }
    }
    if(i==m){
        while(i<=n-1){
            re[k]=a[i];
            k--;i++;
        }
    }
    return re;
}
void display(vector<int>&a) {
	int n=a.size();
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int n;
	cout<<"Enter size for 1st array: ";
	cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++) {
		int j;
		cin>>j;
		a.push_back(j);
	}
	
	int m;
	cout<<"Enter size for 1st array: ";
	cin>>m;
	vector<int> b;
	for(int i=0; i<m; i++) {
		int j;
		cin>>j;
		b.push_back(j);
	}
	
	
	display(a);
vector<int>v=	so(a,b);
	display(v);
}