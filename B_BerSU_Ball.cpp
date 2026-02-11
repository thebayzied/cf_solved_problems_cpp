#include<bits/stdc++.h>
using namespace std;
int main (){

    int n; cin >> n;
    vector <int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];
    int m; cin >> m;
    vector <int> g(m);
    for(int i = 0; i < m; i++) cin >> g[i];
    int pair = 0, i = 0, j = 0;
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    
    while(i < n && j < m){
        if(abs(b[i] - g[j]) <= 1){
            pair++;
            i++;
            j++;
        }
        else if(b[i] < g[j]) i++;
        else if(g[j] < b[i]) j++;
    }
        cout << pair << endl;
    return 0;
}