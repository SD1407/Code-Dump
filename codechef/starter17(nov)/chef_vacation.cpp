#include<iostream>
using namespace std;
int main(){
int T, X, Y, Z;
cin >> T;
string arr[T];
for(int i=0; i<T; i++) {
    cin >> X >> Y >> Z;
    if(X>Z || Y>Z) {
        arr[i] = "NO";
    }
    else if(Z<(X+Y)) {
        arr[i] = "NO";
    }
    else if(Z>=(X+Y)) {
        arr[i] = "YES";
    }
}
for(int j=0; j<T; j++) {
    cout << arr[j] << endl;
}
return 0;
}