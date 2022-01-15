#include<iostream>
using namespace std;

long long int getSum(long long int arr[], long long int n) {
    long long int sum=0;
    for(int i =0; i<n; i++) {
            sum = sum + arr[i];
    }
    return sum;
}
long long int getMax(long long int arr[], long long int n) {
    long long int max = arr[0];
for(int i=0; i<n; i++) {
    if(arr[i]>max) {
        max = arr[i];
    }
}
return max;

}

long long int getMin(long long int arr[], long long int n) {
    long long int min = arr[0];
    for(int i= 0; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}
int main(){
long long int arr[5];
for(int i =0; i<5; i++) {
    cin >> arr[i];
}
long long int sum = getSum(arr, 5);
// cout << sum << endl;
cout << sum - getMax(arr, 5) << " " << sum - getMin(arr, 5);
return 0;
}