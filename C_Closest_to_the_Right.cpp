#include<bits/stdc++.h>
using namespace std;
int main (){

    int n, q; cin >> n >> q;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    while(q--){
        int x; cin >> x;
        int lb = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout << lb + 1 << endl;
    }
    return 0;
}