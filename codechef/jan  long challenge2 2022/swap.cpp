#include<iostream>
using namespace std;

bool zerocase(int arrR, int arrB, int arrG, int N) {
        if((arrR == N) && (arrB == N) && (arrG == N)) {
            return true;
        }
        else {
            return  false;
        }
}
// int done(int head,int p1, int p2, int n) {
//     if(head == n && p1==0 && p2==0 ) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

int swapCount(int n1, int n2, int head1, int head2){
    int swap = 0;
    if((n1 >= n2) && (n1!=0) && (n2!=0)) {
            for(int i=0; i<n2; i++) {
                n1--;
                n2--;
                head1++; // head element
                head2++;  // head element
                swap++;
            }
        }
        else if((n1 < n2) && (n1!=0) && (n2!=0)) {
            for(int i=0; i<n1; i++) {
                n1--;
                n2--;
                head1++;  // head element
                head2++;   // head element
                swap++;
            }
        }
}
int main(){
int t, n, count;
cin >> t;
int arr[t];
for(int i=0; i<t; t++) {
    cin >> n;
    int arrR[3], arrB[3], arrG[3];
    for(int j = 0; j<t; j++) {
        cin >> arrR[j];

    }
    for(int j = 0; j<t; j++) {
        cin >> arrB[j];
        
    }
    for(int j = 0; j<t; j++) {
        cin >> arrG[j];
        
    }

    if(zerocase(arrR[0], arrB[1], arrG[2], n)) {
        arr[i] = 0;
    }
    else{
        count = swapCount(arrR[1], arrB[0], arrR[0], arrB[1]) + swapCount(arrR[2], arrB[0], arrR[0], arrB[2]) + swapCount(arrR[1], arrG[0], arrR[0], arrG[1]) + swapCount(arrR[2], arrG[0], arrR[0], arrG[2]) + swapCount(arrB[2], arrG[1], arrB[1], arrG[2]);
        arr[i] = count;

    }

}
    for(int k=0; k<t; k++) {
        cout << arr[k] << endl;
    }


return 0;
}