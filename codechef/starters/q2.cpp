#include<iostream>
using namespace std;
int main(){
int t;
cin >> t;
int arr[t];
for(int i=0; i<t; i++) {
    int n, a;
    cin >> n >> a;
    int diff = n-a;
    if(a>diff) {
        arr[i] = diff;

    }
    else {
        arr[i] = a;
    }
}
for(int i=0; i<t; i++) {
    cout << arr[i] << endl;
}
return 0;
}