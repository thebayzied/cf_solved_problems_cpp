#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        }
    int min_element = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] < min_element) min_element = a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == min_element) cnt++;
    }
    if(cnt & 1) cout << "Lucky\n";
    else cout << "Unlucky\n";

}