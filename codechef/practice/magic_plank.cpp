#include<iostream>
using namespace std;
int main(){
int T, N;

cin >> T;
int arr[T];
for(int i = 0; i<T; i++) {
    cin >> N;
    char s[N];
    scanf("%s", &s);
    int f=0, l=0, m=0, o=0, d=0;
    if(s[0]==s[1] && s[1]!=s[2]) {
            f++;
        }
        else if(s[N-2]==s[N-1] && s[N-3]!=s[N-2]) {
            l++;
        }
    for(int j = 0; j<N; j++) {
        
        if(s[j]==s[j+1]==s[j+2]) {
            m++;
        } else if(s[j]==s[j+1] && s[j+1]!=s[j+2]) {
            d++;
        } else if(s[j-1]!=s[j]!=s[j+1]){
            o++;
        }
        
    }
    arr[i]= f+o+d+l+((m/2)+m%2);

}
for(int j=0; j<T; j++){
    cout << arr[j] << endl;
}
return 0;
}