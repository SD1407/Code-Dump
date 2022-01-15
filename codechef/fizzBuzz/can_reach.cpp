#include<iostream>
using namespace std;
int main(){
int T, x, y, K;
cin >> T;
string arr[T];
for(int i=0; i<T; i++) {
   cin >> x >> y >> K;
   if(x==0 && y==0){
       arr[i] = "YES";
   }
   else if((x%K)==0 && (y%K)==0){
    arr[i] = "YES";
   }else {
       arr[i] = "NO";
   }
}
for(int j=0; j<T; j++){
    cout << arr[j] << endl;
}
return 0;
}