#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n; 
double p=0, ne=0, z=0;
cin >> n;
int arr[n];

for(int i=0; i<n; i++) {
    cin >> arr[i];
    if(arr[i] == 0){
        z++;
    }
    else if(arr[i]>0) {
        p++;
    }
    else if(arr[i]<0) {
        ne++;
    }
}
cout << fixed;  // this two lines are important for setting precision(decimal number for doubles)
cout << setprecision(6);
cout << (p/(p+ne+z)) << endl;
cout << (ne/(p+ne+z)) << endl;
cout << (z/(p+ne+z)) << endl;

return 0;
}