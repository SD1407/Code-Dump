#include<iostream>
using namespace std;
//its not for bigger number so.. 25 is the limit

void show(long long int arr[], long long int t);
long long int fac (long long int num);

int main(){
long long int t, num;
cin >> t;
long long int arr[t];
for(int i =0; i<t; i++) {
    cin >> num;
    arr[i]= fac(num);
}
show(arr,t);
return 0;
}

long long int fac (long long int num){
    if(num == 1 || num == 0) {
        return 1;
    }
    else {
        return num*fac(num-1);
    }
}
void show(long long int arr[], long long int t) {
    for(int j=0; j<t; j++){
        cout << arr[j] << endl;
    }
}