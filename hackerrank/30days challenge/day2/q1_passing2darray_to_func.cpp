#include<iostream>
using namespace std;

int diagonalD(int *arr, int n) {
    int sum1=0;
    int sum2=0;
      int i, j;
    for (i = 0; i < n; i++){
        int j = i;  // sum for left to right
        sum1 += (*((arr+i*n) + j)); // why this approach ?? because we are transfering the array as a 1 D array so it wouldnt traverse like a 2d arry remember that so ((arr+i)[j]) wouldnt work as its linear... so we have to use ((arr+i*n) + j)  ... i*n will take the entire row for one i... so after i++ it will take the another row...
        int k = n-i-1;
        // cout << (*((arr+i*n) + k)) << endl;
        sum2 += (*((arr+i*n) + k));   // sum for right to left
    }
    // cout << sum1 << " " << sum2;
        if(sum1>sum2){
            return sum1 - sum2;
        }
        else {
            return sum2 - sum1;
        }
}
int main(){
int n;
cin >> n;
int arr[n][n];
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++){
        cin >> arr[i][j];
    }
}
  cout << endl << diagonalD((int *) arr, n);

return 0;
}