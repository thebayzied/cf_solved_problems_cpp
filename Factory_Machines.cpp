#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005], n, t;
bool f(ll x){
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += x / a[i];
        if(sum >= t) return true;
    }
    return false;
}
int main (){
    cin >> n >> t;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    ll l = 1, h = 1e18, ans = -1;
    while(l <= h){
        ll mid = (l + h) / 2;
        if(f(mid)){
            ans = mid;
            h = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
}