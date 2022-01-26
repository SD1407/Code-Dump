#include<iostream>
using namespace std;
int main(){
int s, t, a, b, app, ora;
cin >> s >> t;
cin >> a >> b;
cin >> app >> ora;
int apple[app];
int orange[ora];
int counta=0, countb=0;
for(int i =0; i<app; i++) {
    cin >> apple[i];
}
for(int i =0; i<ora; i++) {
    cin >> orange[i];
}
for(int j=0; j<app; j++) {
    
    if((a+apple[j] >= s ) && (a+apple[j] <= t )){
        counta++;
    }
}
for(int j=0; j<ora; j++) {
    
    if((b+orange[j] >= s ) && (b+orange[j] <= t )){
        countb++;
}     
    }
    cout << counta << endl;
    cout << countb << endl;
return 0;
}