#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ',') cout << " ";
        else if(islower(s[i])) cout << (char)toupper(s[i]); // typecast to char as they return int
        else if(isupper(s[i])) cout << (char)tolower(s[i]); 
        else cout << s[i];
    }
}