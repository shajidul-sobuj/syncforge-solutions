/*
 * AtCoder Auto Push - Synced Solution
 * 
 * Problem: abc430_a
 * Contest: AtCoder Beginner Contest 430
 * Link: https://atcoder.jp/contests/abc430/tasks/abc430_a
 * Submission ID: 70629463
 * Language: C23 (Clang 21.1.0)
 * Execution Time: 1 ms
 * Submitted At: Sat, 01 Nov 2025 14:02:26 GMT
 */

#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf(&#34;%d %d %d %d&#34;, &a, &b, &c, &d);
    if (c>=a && d<b){
        printf(&#34;Yes\n&#34;);
    }else {
        printf(&#34;No\n&#34;);
    }
    return 0;
}



