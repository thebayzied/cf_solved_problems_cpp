#include<bits/stdc++.h>
using namespace std;
int main (){

    int A = 0, B = 0, C = 0;
    char Q, S;
    cin >> A >> S >> B >> Q >> C;

    if(S == '+'){
        if(A + B == C) cout << "Yes";
        else cout << A + B << endl;
        return 0;
    }
    if(S == '-'){
        if(A - B == C) cout << "Yes";
        else cout << A - B << endl;
        return 0;
    }
    if(S == '*'){
        if(A * B == C) cout << "Yes";
        else cout << A * B << endl;
        return 0;
    }

    return 0;
}