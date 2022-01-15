#include<iostream>
using namespace std;
int main(){
int T, N, even, odd;
cin >> T;
int arr1[T]; // for storing the output 
// {may be a check is required}

for(int i =0; i<T; i++) {
    cin >> N;
    int arr2[N];  // for storing the Ai
    even=0, odd=0;
    for(int j =0; j <N; j++) {
        cin >> arr2[j] ;
        if(arr2[j]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    
    if(odd == 1 || odd == 0) {
            arr1[i] = 0;
    }
    else {
        arr1[i] = odd/2;
    }
}
for(int k=0; k<T; k++) {
    cout << arr1[k] << endl;
}
return 0;
}