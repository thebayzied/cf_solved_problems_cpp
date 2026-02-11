#include<bits/stdc++.h>
using namespace std;
double c;
bool f(double x){
    return x * x + sqrt(x) >= c; 
}
int main (){
    cin >> c;
    double l = 0, r = 1e5, ans = 0;
    int i = 100;
    while(i--){
        double mid = l + (r - l) / 2;
        if(f(mid)){
            ans = mid;
            r = mid;
        }
        else l = mid;
    } 
    cout << fixed << setprecision(10) << ans << endl;
}