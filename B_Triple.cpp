#include<bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
}
int main (){

    allahbhalojanen();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int highest = -1;
        bool notfound = false;
        for(int i = 0; i < n; i++){
            int same = 0;
            for(int j = 0; j < n; j++){
                if(a[i] == a[j]) same++;
               }
            if(same >= 3) highest = a[i];

        }
        cout << highest << endl;
    }

    return 0;
}