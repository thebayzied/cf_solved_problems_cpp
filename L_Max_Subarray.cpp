#include<bits/stdc++.h>
using namespace std;
int main (){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int l = 0; l < n; l++){
            for(int r = l; r < n; r++){
                int max_element = a[l];
                for(int i = l; i <= r; i++){
                    if(a[i] > max_element) max_element = a[i];
                }
                cout << max_element << " ";
            } 
        }
        cout << endl;
    }
    return 0;
}