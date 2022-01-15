#include<iostream>
using namespace std;

void printPattern(int n) {
    int i=1;

    if(n==1) {
        cout << n << " ";
    }
    else {
    while(i<=(2*n-1)) {
        if((i==1) || (i==(2*n-1))) {
        int j=2;
        cout << n << " ";
        while(j<=(2*n-2)) {
            cout << n << " ";
            j++;
        }
        
        cout << n << " ";
        i++;
        }
        // cout << endl;
        else {
            int k=2;
        cout << n << " ";
        while(k<=(2*n-2)) {
            printPattern(n-1);
            k++;
        }
        
        cout << n << " ";
        i++;
        }
        cout << endl;
    }
    
    }

}

int main(){
int n;
cin >> n;
printPattern(n);
return 0;
}