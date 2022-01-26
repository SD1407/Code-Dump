#include<iostream>
using namespace std;
int main(){
int t;
cin >>t;
// string arr[t];
while(t) {
    int n;
    cin >> n;
    int arr[n];
    for(int k = 0; k<n; k+=2) {
        arr[k] = 1;
        arr[k+1] = 0;
        
    }
    for(int j =0; j<n; j++){
        cout << arr[j] << " " ;
    }
    t--;
    

}
// for(int i=0; i<t; i++) {
//     cout << arr[i] << endl;
// }
return 0;
}