#include<iostream>
using namespace std;

int main(){
int t;
cin >> t;
int arr[t];
for(int i=0; i<t; i++) {
    int mark;
    cin >> mark;
    if(mark < 38) {
        arr[i] = mark;
    } 
    else {
        int a = (mark / 5);
        a++;
        if(((5*a) - (mark)) < 3 ) {
        mark = 5*a;
        arr[i] = mark;
    }
    else {
        arr[i] = mark;
    }
    }
    
}
for(int k=0; k<t; k++) {
    cout << arr[k] <<  endl;
}
return 0;
}