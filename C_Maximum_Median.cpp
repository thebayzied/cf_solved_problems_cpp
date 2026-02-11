#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int n, k, a[N];
bool f(int x){
    int ops = 0;
    for(int i = (n + 1) / 2; i <= n; i++){
        if(x > a[i]) ops += x - a[i];
        if(ops > k) return false;
    }
    return ops <= k;
}
int main (){
    cin >> n >> k;
    for(int i = 1 ; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int l = 0, r = 2e9, ans = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(f(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}