#include<bits/stdc++.h>
using namespace std;
int main (){

    int a, b; cin >> a >> b;
    long long candle = a;
    long long lo = a;

    while(lo >= b){
        int newc = lo / b;
        candle += newc;
        lo = (lo % b) + newc;
    }
    cout << candle << endl;
    
    return 0;
}