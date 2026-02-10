#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map <int, int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v[x] = i;
            }
            bool ok = true;
            for(int i = 1; i < n; i++){
                if(abs(v[i] - v[i + 1]) % 2 == 0){
                    ok = false;
                    break;
                }
            }
            if(ok) cout << "YES\n";
            else cout << "NO\n";
        } 
    }