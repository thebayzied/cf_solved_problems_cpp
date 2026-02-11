#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x, y, first;
bool f(ll t){
    ll tc = n - 1;
    if ((t / x) + (t / y) >= tc) return true;
    else return false; 
}
int main (){
    cin >> n >> x >> y;
    first = min(x, y);
    ll l = 0, r = 2e9, ans = 0;
    while(l <= r){
        ll mid = (l + r) / 2;
        if(f(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans + first << endl;
}