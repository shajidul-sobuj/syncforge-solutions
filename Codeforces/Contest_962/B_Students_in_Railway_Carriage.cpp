/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 962B - Students_in_Railway_Carriage
 * Link: https://codeforces.com/contest/962/problem/B
 * Submission ID: 381868403
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 1300 | Tags: constructive algorithms, greedy, implementation
 * Submitted At: Thu, 09 Jul 2026 14:47:03 GMT
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
    int a; cin >> a;
    int b; cin >> b;
    string s; cin >> s;
    bool isa;
    if (a>=b) isa = true;
    else isa = false;
    int ans = 0;
    for (int i=0;i<n;i++){
        
        if (s[i] == &#39;*&#39;){
            if (a>=b) isa = true;
            else isa = false;
            continue;
        }
        
        if (isa){
            if (a == 0) {
                isa = !isa;
                continue;
            }
            a--;
            isa = !isa;
            ans++;
        }else {
            if (b == 0) 
            {
                isa = !isa;
                continue;
            }
            b--;
            isa = !isa;
            ans++;
        }
    }
    cout << ans << endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        boom();
    }

    return 0;
}