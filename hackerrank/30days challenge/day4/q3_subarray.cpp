#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0; i<n; i++) {
    cin >> arr[i];
}
int d,m, count = 0;
cin >> d >> m;
for(int j =0; j< n-m+1; j++) {
    int sum = 0;
    for(int k = j; k<m+j; k++) {
        sum = sum + arr[k];
    }
    if(sum == d) {
        count++;
    }
}
cout << count << endl;

return 0;
}