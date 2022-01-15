#include<iostream>
using namespace std;
int main(){
int num, sum=0, r, t;
cin >> t;
int arr[t];
for(int i=0; i<t; i++) {
    cin >> num;
    sum =0;
    while(num>0){
        r = num%10;
        
        
        sum = sum + r;
        
        arr[i]=sum;
        
        num = num / 10;
        
        
    }
}
for(int j =0; j<t; j++) {
    cout << arr[j] << endl;
}


return 0;
}