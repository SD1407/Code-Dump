#include<iostream>
using namespace std;

int getMax(int arr[], int n) {
    int max = arr[0];
for(int i=0; i<n; i++) {
    if(arr[i]>max) {
        max = arr[i];
    }
}
return max;

}
int search(int arr[], int n, int ele) {
        int count =0;
        for(int i = 0; i<n; i++) {
            if(ele == arr[i]) {
                count++;
            }
        }
        return count;
}

int main(){
int n;
cin >> n;
int arr[n];
for(int i =0; i<n; i++) {
    cin >> arr[i];
}
int ele = getMax(arr, n);
cout << search(arr, n, ele);
return 0;
}