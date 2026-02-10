#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N], x;
bool search(int l, int h){
    if(l > h) return false;
    int mid = (l + h) / 2;
    if(a[mid] == x) return true;
    else if(x > a[mid]) return search(mid + 1, h);
    else return search(l, mid - 1);
    }
int main (){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    while(k--){
         cin >> x;
         if(search(1, n)) cout << "YES" << endl;
         else cout << "NO" << endl;
    }
}