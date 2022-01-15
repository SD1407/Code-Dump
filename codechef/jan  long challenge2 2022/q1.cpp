#include<iostream>
using namespace std;

int sum(int arr[], int n) {
    int sum =0;
    for(int i= 0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
int t , arr1[3], arr2[3];
cin >> t;
string arr[t];
for(int i =0; i<t; i++) {
        for(int j =0; j<3; j++) {
            cin >> arr1[j];
        }
        for(int j =0; j<3; j++) {
            cin >> arr2[j];
        }
        int sum1 = sum(arr1, 3);
        int sum2 = sum(arr2, 3);
        if(sum1>sum2) {
            arr[i] = "DRAGON";
        }
        else if(sum1 == sum2) {
            if(arr1[0] > arr2[0]) {
                arr[i] = "DRAGON";
            }
            else if(arr1[0] == arr2[0]) {
                if(arr1[1] > arr2[1]) {
                    arr[i] = "DRAGON";
                }
                else if(arr1[1] < arr2[1]) {
                    arr[i] = "SLOTH";
                }
                else {
                    arr[i] = "TIE";
                }
            }
            else {
                arr[i] = "SLOTH";
            }
        }
        else {
            arr[i] = "SLOTH";
        }

}
    for(int k=0; k<t; k++) {
        cout << arr[k] << endl;
    }

return 0;
}