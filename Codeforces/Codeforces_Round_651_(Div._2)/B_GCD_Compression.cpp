/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 1370B - GCD_Compression
 * Link: https://codeforces.com/contest/1370/problem/B
 * Submission ID: 384519312
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1100 | Tags: constructive algorithms, math, number theory
 * Submitted At: Mon, 27 Jul 2026 13:36:10 GMT
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl &#39;\n&#39;
const int N = 1e6;


void boom(){
    int n; cin >> n;
    vector<int> a(n*2);
    for (auto &x:a) cin >> x;
    vector<pair<int, int>> od, ev;
    for (int i=0;i<n*2;i++){
        if(a[i]%2 == 0) ev.push_back({a[i],(i+1)});
        else od.push_back({a[i],(i+1)});
    }
    sort(od.begin(),od.end());
    sort(ev.begin(),ev.end());
    vector<pair<int, int>> ans;
    int n_od = od.size();
    if(od.size()%2 != 0) n_od--;
    int n_ev = ev.size();
    if(ev.size()%2 != 0) n_ev--;

    vector<int> gd;


    for (int i=0;i<n_od;i+=2){
        ans.push_back({od[i].second,od[i+1].second});
        gd.push_back(od[i].first+od[i+1].first);
    }
    for (int i=0;i<n_ev;i+=2){
        ans.push_back({ev[i].second,ev[i+1].second});
        gd.push_back(ev[i].first+ev[i+1].first);

    }
    sort(ans.begin(),ans.end());

    for (int i=0;i<n-1;i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    // cout << endl;

    // // cout << n_ev << " " << n_od << endl;

    // for (auto x:gd) {
    //     cout << x << " ";
    // }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while(t--) boom();
    return 0;
}