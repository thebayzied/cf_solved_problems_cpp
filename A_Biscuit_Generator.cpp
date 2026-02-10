#include<bits/stdc++.h>
using namespace std;
int main (){

    double a, b, t; cin >> a >> b >> t;
    int cnt = 0, i = 1, bis = 0;
    while (i * a <= t + 0.5){
            bis += b;
            i++;
    }   
    cout << bis << endl;
    return 0;
}