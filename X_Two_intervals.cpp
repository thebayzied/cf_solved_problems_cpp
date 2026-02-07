#include<iostream>
using namespace std;
int main (){

    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 < l2){
        cout << -1 << endl;
        }
    
    else if(l1 <= l2 && r1 <= r2){
       cout << l2 << " " << r1;
    }
    
    return 0;
}