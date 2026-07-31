/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2244D - Yaroslav_and_Productivity
 * Link: https://codeforces.com/contest/2244/problem/D
 * Submission ID: 382661271
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 93 ms | Memory: N/A
 * Verdict: OK
 * Rating: N/A | Tags: constructive algorithms, dp, greedy, math, number theory
 * Submitted At: Tue, 14 Jul 2026 16:03:50 GMT
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define endl &#39;\n&#39;
const int N = 1e5+10;

void boom()
{
    int n; cin >> n;
    int m; cin >> m;
    vector<int> a(n);
    for (auto &x:a) cin >> x;
    vector<int> b(m);
    for (auto &x:b) cin >> x;
    ll ans = 0;
    int idx = 0;
    sort(all(b));
    for (int i=0;i<m;i++){
        ll sum = 0;
        int j = idx;
        idx = b[i];
        for (j;j<idx;j++) sum +=a[j];
        ans += abs(sum);
    }
    for (int i=idx;i<n;i++) ans+=a[i];
    cout << ans << endl;


}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}