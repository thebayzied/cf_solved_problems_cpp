#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        long long mx = 0;
        sort(a.begin(), a.end());
        mx = a[n - 1] * a[n - 2];
        // for(int i = 0; i < n - 1; i += 2){
        //     pair <int, int> p = {a[i], a[i + 1]};
        //     int ans = max(p.first, p.second) * min(p.first, p.second);
        //     mx = max(ans, mx);
        // }
        cout << mx << endl;
    }
}