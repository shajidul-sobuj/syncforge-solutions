/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 71A - Way_Too_Long_Words
 * Link: https://codeforces.com/contest/71/problem/A
 * Submission ID: 382564217
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 46 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: strings
 * Submitted At: Tue, 14 Jul 2026 14:10:00 GMT
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int sz = s.size();
        if (sz<=10) {
            cout << s << endl;
        }else {
            cout << s[0] << sz-2 << s[sz-1] << endl;
        }
    }
    return 0;
}