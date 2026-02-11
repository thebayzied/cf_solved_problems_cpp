#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a;
        ll sum1 = 0, sum2 = 0;
        if(n % 4 != 0){
            cout << "NO" << endl;
            continue;
        }
        else{
            for(int i = 1; i < n / 2 + 1; i++){
                a.push_back(i * 2);
                sum1 += (i * 2);
            }
            for(int i = 1; i < n / 2; i++){
                a.push_back(i * 2 - 1);
                sum2 += (i * 2 - 1);
            }
            a.push_back(sum1 - sum2);
            cout << "YES" << endl;
            for(int e : a) cout << e << " ";
            cout << endl;
        }
    }
    return 0;
}