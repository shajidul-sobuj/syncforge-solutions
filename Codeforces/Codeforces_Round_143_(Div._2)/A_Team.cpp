/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 231A - Team
 * Link: https://codeforces.com/contest/231/problem/A
 * Submission ID: 383451531
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 800 | Tags: brute force, greedy
 * Submitted At: Sun, 19 Jul 2026 10:04:32 GMT
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl &#39;\n&#39;
// cont int N = 1e5;



void boom(){

    int n; cin >> n;
    int sum = 0;
    for (int i=0;i<n;i++){
        int x,y,z; cin >> x >> y >> z;
        int t = (x+y+z);
        if(t>=2) sum++;
    }
    cout << sum << endl;

     
}





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--)boom();
    return 0;
}