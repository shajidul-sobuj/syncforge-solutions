/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 2244A - Iskander_and_Drawings
 * Link: https://codeforces.com/contest/2244/problem/A
 * Submission ID: 382578867
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 15 ms | Memory: N/A
 * Verdict: OK
 * Rating: N/A | Tags: dp, games, greedy, strings
 * Submitted At: Tue, 14 Jul 2026 14:44:08 GMT
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
    string s; cin >> s;
    int cnt = 0;
    int ans = 0;
    for (int i=0;i<n;i++){
        if(s[i] == &#39;*&#39;){
            ans = max(cnt, ans);
            cnt = 0;
        }else cnt++;
    }
    ans = max(cnt, ans);
    ans++;
    cout << ans/2 << endl;
    // cout << ans;

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