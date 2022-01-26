#include<bits/stdc++.h>
using namespace std;
double avg(double arr[], int n) {
    double sum = 0 ;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    double a = (sum / n);
    return a;
}
int main(){
int t;
cin >>t;
double arr[t];
for(int i=0; i<t; i++) {
    int n;
    cin >> n;
    double arrn[n];
    for(int j=0; j<n; j++){
        cin >> arrn[j];
    }
    sort(arrn, arrn+n);
    double arr1[n-1];
    for(int k=0; k<n-1; k++) {
        arr1[k] = arrn[k];
    }
    int num = avg(arr1, n-1);
    // cout << num << endl;
    // cout <<  arrn[n-1] <<endl;
    arr[i] = num + arrn[n-1];
    // cout << arr[i] <<  endl;
}

for(int i=0; i<t; i++) {
    cout << fixed;  
    cout << setprecision(6);
    cout << (double)arr[i] << endl;
}
return 0;
}