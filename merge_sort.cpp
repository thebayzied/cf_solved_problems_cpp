#include<bits/stdc++.h>
using namespace std;
vector <int> merge(vector <int> left, vector <int> right){
    vector <int> ans;
    int i = 0, j = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]){
            ans.push_back(left[i]);
            i++;
        }
        else{
            ans.push_back(right[j]);
            j++;
        }
    }
    while(i < left.size()){
        ans.push_back(left[i]);
        i++;
    }
    while(j < right.size()){
        ans.push_back(right[j]);
        j++;
    }
    return ans;
}
vector <int> a;
vector <int> merge_sort(int l, int r){
    if(l == r) return {a[l]};
    int mid = (l + r) / 2;
    vector <int> left = merge_sort(l, mid);
    vector <int> right = merge_sort(mid + 1, r);
    return merge(left, right);
}
int main (){

    int n; cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector <int> ans = merge_sort(0, n - 1);

    for(int e : ans) cout << e << " ";
    return 0;
}