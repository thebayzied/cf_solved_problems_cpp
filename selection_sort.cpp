#include<bits/stdc++.h>
using namespace std;
int main (){

    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++){
        int min_index = i;
        for(int j = i + 1; j <= n; j++){
            if(a[min_index] > a[j]) min_index = j;
        }
        swap(a[min_index], a[i]); 
    }
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}