#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int i =1;
int space;
while(i<=n) {
    space=n-i;
    int j=i;
    while(space){
        cout << " ";
        space--;
    }
    while(j) {
        cout << '#';
        j--;
    }
    cout << endl;
    i++;
}
return 0;
}