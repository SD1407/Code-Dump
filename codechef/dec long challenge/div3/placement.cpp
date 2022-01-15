#include<iostream>
using namespace std;
int main(){
char p1, p2, p3, s1, s2;
int T;
cin >> T;
char arr[T];
for(int i =0; i<T; i++) {
    cin >> p1 >> p2 >> p3;
    cin >> s1 >> s2;
    if(p1==s1 || p1==s2) {
        arr[i]==p1;
    }
    else if(p2==s1 || p2==s2) {
        arr[i]==p2;
    }
    else if(p3==s1 || p3==s2) {
        arr[i]==p3;
    }
}
for(int j=0; j<T; j++) {
    cout << arr[j] << endl;
}
return 0;
}