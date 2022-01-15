#include<iostream>
using namespace std;
int main(){
int t, num, r, sum;
cin >> t;
int arr[t];
for(int i=0; i<t; i++)  {
    cin >> num;
    sum =0;
    while(num>0) {
        r = num%10;
        if(r==4) {
        sum++;
        }
        num = num/10;
    }
arr[i] = sum;

}
for(int j =0; j<t; j++) {
    cout << arr[j] << endl;
}
return 0;
}