#include<bits/stdc++.h>
using namespace std;
int main (){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int op = 0;
        for(int i = 0; i < a.size() - 1;){
            if(a[i] < a[i + 1]){
                a.erase(a.begin() + (i + 1)); 
                op++;
                if(i > 0) i--;
                else i++;
            }
            else i++;
        }
        cout << op << endl;
    }
    return 0;
}