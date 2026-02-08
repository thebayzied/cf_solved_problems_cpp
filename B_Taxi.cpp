#include<bits/stdc++.h>
using namespace std;
int main (){
 
    int n; cin >> n;
    vector <int> a(n);
    int g1 = 0, g2 = 0, g3 = 0, g4 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) g1++; 
        else if(a[i] == 2) g2++;
        else if(a[i] == 3) g3++; 
        else g4++;
    }
    long long taxi = 0;
    taxi += g4;
    int pair = min(g1, g3);
    g1 = g1 - pair;
    g3 = g3 - pair;
    taxi += (g3 + pair);
    taxi += (g2 / 2);
    if(g2 % 2 != 0){
        taxi++;
        g1 = g1 - min(g1, 2);
    }
    if(g1 > 0) taxi += (g1 + 3) / 4;
    cout << taxi << endl;
    return 0;
}