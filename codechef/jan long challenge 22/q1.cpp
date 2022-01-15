#include<iostream>
using namespace std;
int main(){
double t1, t2, r1, r2;
int t;

cin >> t;
string arr[t];
for(int i=0; i<t; i++) {
    cin >> t1 >> t2 >> r1 >> r2;
    double k1 = (t1*t1)/(r1*r1*r1);
    double k2 = (t2*t2)/(r2*r2*r2);
    

    if(k1 == k2) {
        arr[i] = "yes";
    }
    else {
        arr[i] = "no";
    }

}
for(int j=0; j<t; j++) {
    cout << arr[j] << endl; 
}

return 0;
}