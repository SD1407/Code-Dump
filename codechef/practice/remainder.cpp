#include<iostream>
using namespace std;
int main(){
int t, A, B;
cin >> t;
int arr[t];
for(int i =0; i<t ; i++) {
    cin >> A >> B;
    arr[i] = A%B;
}
for(int j=0 ; j<t; j++) {
    cout << arr[j] << endl;
}
return 0;
}