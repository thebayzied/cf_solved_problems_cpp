#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    bool ok = true;
    int cnt = 0;
    while(ok){
        for(int i = 0; i < n; i++){
        if(a[i] & 1){
            ok = false;
            break;
            }
        }
        if(ok){
        cnt++;
        for(int i = 0; i < n; i++){
            a[i] = a[i] / 2;
            }
        }
    }
    cout << cnt << endl;
    
    return 0;
}