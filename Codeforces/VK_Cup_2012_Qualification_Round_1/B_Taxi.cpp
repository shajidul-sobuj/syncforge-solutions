/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 158B - Taxi
 * Link: https://codeforces.com/contest/158/problem/B
 * Submission ID: 383454319
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 124 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1100 | Tags: *special, greedy, implementation
 * Submitted At: Sun, 19 Jul 2026 10:33:16 GMT
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl &#39;\n&#39;
// cont int N = 1e5;



void boom(){
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
    }
    // cout << mp[1] << " " << mp[2] << " " << mp[3] << " " << mp[4];

    int ans = 0;
    ans += mp[4];

    ans += mp[3];

    mp[1] = (mp[1]-mp[3]);
    if(mp[1] <= 0) mp[1] = 0;
    ans += (mp[2])/2;

    if(mp[2]%2 == 0) mp[2] = 0;
    else mp[2] = 1;
    ans += mp[1]/4;

    mp[1] = mp[1]%4;
    // cout <<mp[2] << " " <<  mp[1] << endl;
    if (mp[2] == 0  && mp[1] == 0){
        cout << ans << endl;
        return;
    }
    if(mp[2] == 1){
        if(mp[1]<=2) ans++;
        else ans+=2;
    }else {
        if(mp[1]!=0) ans++;
    }
    cout << ans << endl;
    // cout << mp[1] << " " << mp[2] << " " << mp[3] << " " << mp[4];

    
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--)boom();
    return 0;
}