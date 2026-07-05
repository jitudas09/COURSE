#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for(int l = 0; l < n; ++l){
        for(int r = l; r < n; ++r){
            for(int i = l; i <= r; ++i){
                cout << s[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}