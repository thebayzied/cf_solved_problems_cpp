#include<bits/stdc++.h>
using namespace std;
int main (){

    long long n, m;
    cin >> n >> m;
    vector <int> a(m);
    for(int i = 0 ;i < m;i++) cin >> a[i];

    long long time = 0;
    long long position = 1;
    for(int i = 0;i < m;i++){
        if(a[i] >= position){
            time += (a[i] - position);
        }
        else{
            time += n - (position - a[i]);
        }
        position = a[i];
    }
    cout << time << endl;

    return 0;
}