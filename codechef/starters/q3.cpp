#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >>t;
string arr[t];
string s = "abcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyzabcdefghijklmnopqstuvwxyz";
for(int i =0; i<t; i++) {
    int a;
    cin >> a;
    string s1;
    if(a<=1051) {
        s1 = s.substr(0, a);
        arr[i] = s1;
    }
    // else {
    //     int b = (a/526) + 1;
    //     for(int j = 0; j<b; j++) {
    //         s += s;
    //     }
    //     // cout << s << endl;
    //     s1 = s.substr(0, a);
    //     arr[i] = s1;
    // }
}

for(int i=0; i<t; i++) {
    cout << arr[i] << endl;
}
return 0;
}