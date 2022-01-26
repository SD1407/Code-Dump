#include<iostream>
using namespace std;
int main(){
int t;
cin >>t;
int arr[t];
for(int i=0; i<t; i++) {
    cin >> arr[i];
}
int min, max, cmin = 0, cmax = 0;
min = arr[0];
max = arr[0];
for(int i = 1; i<t; i++) {
    if(arr[i] > max) {
        max = arr[i];
        cmax++;
    }
    else if(arr[i] < min) {
        min = arr[i];
        cmin++;
    }
}
cout << cmax << " " << cmin << endl;
return 0;
}