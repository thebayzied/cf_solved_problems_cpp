#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> r(n);
        for(int i = 0; i < n; i++) cin >> r[i];
        int m; cin >> m;
        vector <int> b(m);
        for(int i = 0; i < m; i++) cin >> b[i];
        
        ll sum = 0;
        ll br = LLONG_MIN;
        for(int e : r){
            sum += e;
            br = max(br, sum);
        }
        sum = 0; ll bb = LLONG_MIN;
        for(int e : b){
            sum += e;
            bb = max(bb, sum);
        }
        ll ans = max(br, 0LL) + max(bb, 0LL);
        cout << ans << endl;
    }
    return 0;
}