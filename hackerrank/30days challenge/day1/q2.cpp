#include<iostream>
using namespace std;

int sum(int arr[], int n) {
    int i=0;
    int sum =0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0; i<n; i++) {
    cin >> arr[i];
}
cout << sum(arr, n);   // only pass the head of the array
return 0;
}