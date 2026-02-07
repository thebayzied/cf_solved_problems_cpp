#include<bits/stdc++.h>
using namespace std;
int main (){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for(int i = 0;i < n; i++) cin >> a[i];

        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        int count = 1;
        int maxima = 0;
        sort(a.begin(), a.end());
        for(int i = 0;i < n - 1; i++){
            if(a[i + 1] - a[i] <= k){
            count++;
            }
            else count = 1;
            if(count > maxima) maxima = count;
        }
        cout << n - maxima << endl;
    }

    return 0;
}