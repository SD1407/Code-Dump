#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int isPrime(int n) {
    if(n <= 1) {
        return 0;
    }
    else if(n>1) {
        if(n == 2){
            return 1;
        }
        else {
        for(int i=2; i<n; i++) {
            if((n%i) == 0) {
                return 0;
            }
            else {
                return 1;
            }
        }
    }
}

}
int convert(string s) {
    int num = 0;
    int p = s.size() - 1;
        for(int i=0; i<(s.size()); i++) {
            if(s[i] == '0') {
                num = num + 0;
            }
            else {
                num = num + pow(2, (p-i));
            }
        }
        return num;
        
}
int main(){
    int t , num , track=0;
    int prime;
    string bnum;
    cin >> t;
    string arr[t];
    for(int i = 0; i<t; i++) {
        cin >> bnum;
        
        for(int j=1; j<=(bnum.size()); j++) {
            string s = bnum.substr(0, j);
            for(int l=0; l<s.size(); l++){
                if(s[l] == '0') {
                    track++;
                    continue;
                }
            }
            if(track == s.size()){
                prime = isPrime(num);
            }else {
            num = convert(s);
            prime = isPrime(num);
            if(prime == 1){
                break;
            }
            }
        }
        if(prime == 1) {
                arr[i] = "yes";
            }
        else if(prime == 0){
            arr[i] = "no";
        }
        // cout << num << endl;
    }
      for(int k=0; k<t; k++) {
    cout << arr[k] << endl; 
}
return 0;
}