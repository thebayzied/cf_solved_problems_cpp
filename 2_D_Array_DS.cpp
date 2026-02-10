#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){

    int a[6][6];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> a[i][j];
        }
    }
    int maxm = INT_MIN;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            int sum = a[i][j] + a[i][j + 1] + a[i][j + 2]+
                            a[i + 1][j + 1]+
                  a[i + 2][j]+a[i + 2][j + 1]+ a[i + 2][j + 2]; 
            maxm = max(maxm, sum);
        }
    }
    cout << maxm << endl;
    return 0;
}