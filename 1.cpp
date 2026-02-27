#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

   vector<int> a1(n);
   for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
        a1[i]=a[j];
    }
   }
   for(int i=0;i<n;i++){
    cout<<a1[i];
   }
}

