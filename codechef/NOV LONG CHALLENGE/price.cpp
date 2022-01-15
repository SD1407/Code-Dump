#include<iostream>
using namespace std;
int main(){
int T, K, A, B, X, Y;
cin >> T;

string arr[T];
for(int i =0; i<T; i++) {
    cin >> X >> Y >> A >> B >> K;
    X = X + (K*A);
    Y = Y + (K*B);
    if(X==Y) {
        arr[i] = "SAME PRICE";
    } 
    else if(X>Y) {
        arr[i] = "DIESEL";
    } else if(X<Y) {
        arr[i] = "PETROL";
    }
}
for(int j=0; j<T; j++) {
    cout << arr[j] << endl;
}

return 0;
}