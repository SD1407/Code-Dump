#include<iostream>
using namespace std;
int divisonCount(int arr[], int num, int n) {
    int count = 0; 
    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n; j++){
            if(((arr[i] + arr[j])%num) == 0) {
                count++;
            }
        }
    }
    return count;
}
int main(){
int n, num;
cin >> n >> num;
int arr[n];
for(int i=0; i<n; i++) {
    cin >> arr[i];
}
cout << divisonCount(arr, num, n) << endl;
return 0;
}