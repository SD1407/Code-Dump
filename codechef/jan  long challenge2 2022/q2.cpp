
#include<bits/stdc++.h>
using namespace std;

int giveCount(int arrd[], int n, int x) {
    int sum =0, count = 0;
    for(int i =0; i<n; i++) {
        sum = sum + arrd[i];
        count++;
        
        if(sum >= x) {
            
            break;
        }
    }
    if(sum>=x) {
        return count;
    }
    else if (x>sum){
        return -1;
    }
    
}
int main(){
int t, n, x;
cin >> t;
int arr[t];
for(int i =0; i<t; i++) {
    cin >> n >> x;
    int arrd[n];
    for(int j=0; j<n; j++) {
        cin >> arrd[j];
    }
    sort(arrd, arrd + n, greater<int>());
    arr[i] = giveCount(arrd, n , x);
}

    for(int k=0; k<t; k++) {
        cout << arr[k] << endl;
    }

return 0;
}