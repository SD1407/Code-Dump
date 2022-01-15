#include<iostream>
using namespace std;
int main(){
int T, N, K;
cin >> T;
int arr[T];
for(int i=0; i<T; i++) {
    cin >> N >> K;
    if(N==0){
    arr[i]=0;
    }
    else if(K>N) {
        
        arr[i]=-1;

    }
    else if((N>=K)) {
        if((N%K)==0){
        arr[i]=(N/K);
        }
        else{
            arr[i]=-1;
        }
    }
}
for(int j=0; j<T; j++){
    cout << arr[j] << endl;
}
return 0;
}