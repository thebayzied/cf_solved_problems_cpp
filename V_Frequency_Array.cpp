#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, m; cin >> n >> m;
    int freq[m];
    for(int i = 1; i <= m; i++){
        freq[i] = 0;
    }
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
        }
    for(int i = 1; i <=m; i++){
        cout << freq[i] << endl;
    }
}