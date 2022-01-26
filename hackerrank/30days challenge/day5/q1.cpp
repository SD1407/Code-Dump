#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i<n; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
    }
    return max;
}
int main(){
int n;
cin >> n;
int arr[n];

for(int i = 0; i<n; i++) {
    cin >> arr[i];
}
    set<int> st;
    for(int i = 0; i<n; i++) {
        st.insert(arr[i]);
    }
    int arr1[st.size()];  // for elements 
    int arr2[st.size()];  // for counts
    // pair<int, int> p;

    int i=0;
    for(auto it : st){
        // cout << "count of " << it << " is " << count(arr, arr+n, it) << endl;
        arr1[i] = it;
        arr2[i] = count(arr, arr+n, it);
        i++;
    }
    int a = getMax(arr2, st.size());
    auto it = find(arr2, arr2+(st.size()), a);
    int ind = it - arr2;

    cout << arr1[ind] << endl;
return 0;
}