#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    int t; cin >> t;
    while(t--){
        ll a, b, n; 
        cin >> a >> b >> n;
        ll v = a / b;
        if(v >= n) cout << 1 << endl;
        else if(a == b) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}