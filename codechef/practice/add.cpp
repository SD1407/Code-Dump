#include<iostream>
using namespace std;
int main(){
// enter the no. of time you wanna take input 
int t ,a ,b;
// cout << "enter number :" << endl;
cin >> t;
int arr[t];
for(int i=0; i<t; i++) {
    // cout << "enter two numbers :" <<endl;
    cin >> a >> b;
    arr[i] = a+b;
}
for(int j=0; j<t; j++) {
    cout << arr[j] << endl;
}

return 0;
}