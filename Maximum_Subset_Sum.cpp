#include <bits/stdc++.h>
using namespace std;

void solve(){
    int answer = 0;
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        answer = max(answer, sum);
    }
    cout << answer << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}