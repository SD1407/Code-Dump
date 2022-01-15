#include<iostream>
using namespace std;
int main(){
int t;
cin >> t;
while(t--) {
    string s;
    bool cond = false;
    cin >> s;
    for(int i = 0; i<s.length(); i++) {
        if(s[i] == '1' && (s[i+1]=='1' || s[i+1] == '0')) {
            cond = true;
            cout << "yes" <<endl;
            break;
        }
    }
    if(cond==false){
        cout << "no" << endl;
    }
}
return 0;
}