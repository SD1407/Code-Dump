#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int convert(string s) {
    int num = 0;
    int p = s.size() - 1;
        for(int i=0; i<(s.size()); i++) {
            cout << "index of string is " << s[i] << endl;
            if(s[i] == '0') {
                num = num + 0;
                cout << "0 loop number is" << num << endl;
            }
            else {
                cout << "1 loop number is" << pow(2, (p-i)) << endl;
                num = num + pow(2, (p-i));
                cout << "1 loop number is" << num << endl;
            }
            
            
        }
        return num;
        // if(num == 1) {
        //     return 0;
        // }
        // else{
        //     return num;
        // }
}
int main(){
string s;
cin >> s;
// int a = convert(s);
for(int l=0; l<s.size(); l++){
                if(s[l] == '0') {
                    continue;
                }
                else {
                    cout << "1" << " ";
                }
}
return 0;
}