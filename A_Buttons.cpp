#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    ll a, b, coins = 0; cin >> a >> b;
    for(int i = 0; i < 2; i++){
        if(a > b){
            coins += a;
            a -= 1;
        }
        else{
            coins += b;
            b -= 1;
        }
    }
    cout << coins << endl;
}