#include<iostream>
using namespace std;
int main(){
int x1, x2, v1, v2;
cin >> x1 >> v1 >> x2 >> v2;
int modp = x2 -x1;
int modv = v2-v1;
if(modp > 0 && modv < 0){
    modv*=(-1);
int rem =  (modp%modv);
if(rem == 0) {
    cout << "YES" << endl;
}
else {
    cout << "NO" << endl;
}
}
else if(modp < 0 && modv > 0) {
        modp*=(-1);
int rem =  (modp%modv);
if(rem == 0) {
    cout << "YES" << endl;
}
else {
    cout << "NO" << endl;
}
}
else {
    cout << "NO" << endl;
}



return 0;
}