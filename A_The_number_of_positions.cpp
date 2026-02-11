#include<bits/stdc++.h>
using namespace std;
int main (){

    int n, a, b; cin >> n >> a >> b;
    int maxima = max(a + 1, n - b);
    cout << n - maxima + 1<< endl;
    return 0;
}