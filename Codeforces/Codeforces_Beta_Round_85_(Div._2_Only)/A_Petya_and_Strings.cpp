/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 112A - Petya_and_Strings
 * Link: https://codeforces.com/contest/112/problem/A
 * Submission ID: 382560659
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 62 ms | Memory: N/A
 * Verdict: OK
 * Rating: 800 | Tags: implementation, strings
 * Submitted At: Tue, 14 Jul 2026 13:41:02 GMT
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for (int i=0;i<s1.size();i++)
    {
        if (s1[i]<s2[i])
        {
            cout << -1 << endl;
            return 0;
        }else if (s1[i]>s2[i])
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}