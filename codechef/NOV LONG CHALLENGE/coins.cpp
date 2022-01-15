#include<iostream>
using namespace std;
int main(){
int T,X,Y;
cin >> T;
string arr[T];
for(int i =0; i<T; i++) {
    cin >> X >> Y;
    if(X==0 && Y==0) {
        arr[i] = "NO";
    }
    else if((X%2)==0 && (Y%2)==0 ){
        arr[i] = "YES";
    }
    else if((X%2)==0 && (Y%2)!=0) {
        if(X<2) {
            arr[i] = "NO";
        }
        else {
            arr[i] = "YES";
        }
    } 
    else {
        arr[i] = "NO";
    }
}
for(int j=0; j<T; j++) {
    cout << arr[j] << endl;
}
return 0;
}