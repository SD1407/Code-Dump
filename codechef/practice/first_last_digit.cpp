#include<iostream>
using namespace std;
int main(){
int t, num, r;
cin >> t;

int arr[2][t];

for(size_t i =0; i<t; i++) {
    cin >> num;
    arr[0][i] = num%10; // last digit
    while(num>0) {
        r = num%10;
        num = num/10;
    }
    arr[1][i] = r; // first digit
}
for(size_t j =0; j<t; j++) {
    cout << arr[0][j] + arr[1][j] << endl;
}
return 0;
}