#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll w, h, n;
bool ok(ll x){
    if((x / w) * (x / h) >= n) return true;
    else return false;
}
int main (){

    cin >> w >> h >> n;
    for(ll i = 1; i <= 1e14 ; i ++){ // l >= sqrt(10^9 * 10^9 * 10^9) == 10^13.5 -> 10^14
        if(ok(i)){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}