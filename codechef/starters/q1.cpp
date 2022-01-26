#include<iostream>
using namespace std;
int main(){
int t;
cin >> t;
string arr[t];
for(int i=0; i<t; i++){
    int x, y, z;
    cin >> x >> y >> z;
    if(x>=y) {
        arr[i] = "PIZZA";
    }
    else if( (x< y) && (x>=z)){
        arr[i] = "BURGER";
    }
    else if((x<y) && (x<z)){
        arr[i] = "NOTHING";
    }
    // else {
    //     arr[i] = "NOTHING";
    // }

}
for(int i=0; i<t; i++) {
    cout << arr[i] << endl;
}
return 0;
}