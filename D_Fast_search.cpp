#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N], n;
int solve(int x){
    int l = 1, r = n, ans = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] <= x){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}
int main (){

    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int k; cin >> k;
    while(k--){
        int l, r; cin >> l >> r;
        cout << solve(r) - solve(l - 1) << " ";
    }    
}