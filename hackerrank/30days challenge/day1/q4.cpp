#include<iostream>
using namespace std;

long long int sum(long int arr[], int n) {
    int i=0;
    long long int sum =0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
int n;
cin >> n;
long int arr[n];
for(int i=0; i<n; i++) {
    cin >> arr[i];
}
cout << sum(arr, n);   // only pass the head of the array
return 0;
}