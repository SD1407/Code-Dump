#include<iostream>
#include<cstring>
// here i tried using an array, to take the input as an array and then iterate through it and sum all the digits.. but failed
using namespace std;
int main(){
    cout << "enter the number :" << endl;
int t, a;
char arr[7];
cin >> t;
int arrN[t];
for(int i=0; i<t; i++) {
    cout << "enter the string :" << endl;
    cin >> a;

    arr[7] = (char)a;
    // cin >> arr[7];
    arrN[i] =(int)(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]);
}
for(int j=0; j<t; j++) {
    cout << (int)arrN[j] << endl;
}
return 0;
}