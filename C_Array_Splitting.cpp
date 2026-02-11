#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 9;
int n, k;
int main (){
    cin >> n >> k;
    vector <int> a(n), v;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++) v.push_back(a[i - 1] - a[i]);
    sort(v.begin(), v.end());
    int res = a[n - 1] - a[0];
    for(int i = 0; i < k - 1; i++) res += v[i];
    cout << res << endl;
}