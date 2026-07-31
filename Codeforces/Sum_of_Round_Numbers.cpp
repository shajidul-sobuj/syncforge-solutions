#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;

void boom(){
    int n; cin >> n;
    vector<int> a;
    int dv = 10;
    while(n){
        if(dv == N) break;
        int re = n%dv;
        if(re) a.push_back(re);
        n-=re;
        dv*=10;
    }
    cout << a.size() << endl;
    for(auto x:a) cout << x << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        boom();
    }
    return 0;
}