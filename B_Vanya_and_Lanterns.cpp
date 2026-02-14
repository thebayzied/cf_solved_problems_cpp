#include<bits/stdc++.h>
using namespace std;
int main (){

    double n, l;
    cin >> n >> l;
    vector <double> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    double maxima = 0;
    double lg = a[0];
    double rg = l - a[n - 1];
    for(int i = 1; i < n; i++){
        double gaps = (a[i] - a[i - 1]);
        if(gaps > maxima) maxima = gaps;
    }
    cout << fixed << setprecision(10) << max({maxima/2.0, lg, rg}) << endl;
    return 0;
}