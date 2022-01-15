#include<iostream>
using namespace std;
int main(){
int T, A, B, P, Q;
cin >> T;
int arr[T];
for(int i=0; i<T; i++) {
    cin >> A >> B >> P >> Q;
    if(A==P && B==Q) {
        arr[i]=0;
    }
    else if(((A+B)%2)==((P+Q)%2)) {
        arr[i]= 2;
    }
    // else if ((A+B)%2==1 && (P+Q)%2==0) {
    //     arr[i]=1;
    // }
    // else if ((A+B)%2==0 && (P+Q)%2==1) {
    //     arr[i]=1;
    // }
    else {
        arr[i] =1;
    }
}
for(int j=0; j<T; j++) {
    cout << arr[j] << endl;
}
return 0;
}