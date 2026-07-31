/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 231A - Team
 * Link: https://codeforces.com/contest/231/problem/A
 * Submission ID: 382073081
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: brute force, greedy
 * Submitted At: Sat, 11 Jul 2026 05:58:22 GMT
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl &#39;\n&#39;

void boom()
{
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(3,0));
    int ans = 0;
    for (int i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];

        int sum = (a[i][0]+a[i][1]+a[i][2]);
        if (sum >= 2) ans++;
    }
    cout << ans << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) boom();
    return 0;
}