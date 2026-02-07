#include<iostream>
using namespace std;
int main (){

    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    int mod = 100;
    long long multi = 1;
    multi = (A % mod);
    multi = (multi * B) % mod;
    multi = (multi * C) % mod;
    multi = (multi * D) % mod;

    if(multi < 10) cout << 0 << multi << endl;
    else cout << multi << endl;
    return 0;
}