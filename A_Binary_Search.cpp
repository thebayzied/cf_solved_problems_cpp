#include<iostream>
using namespace std;
int main (){

    int n, q; cin >> n >> q;
    int a[n];
    for(int i = 1; i <= n; i++) cin >> a[i];
    while(q--){
        int x; cin >> x;
        int l = 1, r = n;
        bool found = false;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(a[mid] == x) {found = true; break;}
            else if(x > a[mid]) l = mid + 1;
            else r = mid - 1;
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}