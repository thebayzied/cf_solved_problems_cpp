#include<bits/stdc++.h>
using namespace std;
int main (){
    string s; cin >> s;
    int freq[26] = {0};
    for(int i = 0; i < s.size(); i++){
        freq[s[i] - 'a']++;
    }
    for(char c : s){
        cout << c << " " << ":" << " " << freq[c - 'a'] << endl; 
    }

}