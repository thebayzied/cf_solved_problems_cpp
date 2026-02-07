#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){

    int t; cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s; cin >> s;
        string ss = s + s;
        int ng = -1, ans = 0;
        for(int i = 2 * n - 1; i >= 0; i--){
            if(ss[i] == 'g') ng = i;
            if(i < n && ss[i] == c) ans = max(ans, ng - i);
            }
        cout << ans << endl;
    }
    return 0;
} 
