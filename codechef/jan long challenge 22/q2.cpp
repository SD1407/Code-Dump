#include<iostream>
using namespace std;
int main(){
int n, d;
int t;
cin >> t;
int arr[t];
for(int i=0; i<t; i++) {
    cin >> n >> d;
    int num = 1;
    if(d == 0) {
        arr[i] = 1;
    }

    else if(d>0 && d<=10) {
        for(int k=0; k<d; k++) {
            num = num*2;
            
        }
        if(n>=num) {
            arr[i] = num;

        }
        else if(n<num) {
            arr[i] = n;
        }
        
    }
    else if(d>0 && d>10) {
        for(int j=0; (j<10  && (n>num)); j++) {
            num = num*2;
            
        }
        for(int l=0; (l<(d-10) && (num<n)); l++){
            num = num*3;
            
        }
        if(n>=num) {
            arr[i] = num;

        }
        else if(n<num) {
            arr[i] = n;
        }

    }

}
for(int j=0; j<t; j++) {
    cout << arr[j] << endl; 
}

return 0;
}