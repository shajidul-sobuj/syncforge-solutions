/*
 * AtCoder Auto Push - Synced Solution
 * 
 * Problem: abc235_b
 * Contest: ABC235
 * Link: https://atcoder.jp/contests/abc235/tasks/abc235_b
 * Submission ID: 72630209
 * Language: C++23 (GCC 15.2.0)
 * Execution Time: 27 ms
 * Submitted At: Wed, 21 Jan 2026 14:27:42 GMT
 */

#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i&#43;&#43;)
    {
        cin >>a[i];
    }
    int tl = a[0];
    for (int i=0;i<n-1;i&#43;&#43;)
    {
        if (a[i]<a[i&#43;1])
        {
            tl = a[i&#43;1];
        }
        else{
            break;
        }
    }
    cout << tl << endl;
    return 0;
}