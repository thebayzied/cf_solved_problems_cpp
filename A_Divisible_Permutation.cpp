#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    vector <int> a(n);
    for(int i = 1; i <= n; i += 2) swap(a[i], a[i + 1]);
    for(int e : a) cout << e << " ";
    cout << endl;
}