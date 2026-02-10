#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    ll a, b; cin >> a >> b;
    if(a > b) cout << 0 << endl;
    else cout << b - a + 1 << endl;
}