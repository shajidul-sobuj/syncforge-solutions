/*
 * Codeforces Auto Push - Synced Solution
 * 
 * Problem: 118A - String_Task
 * Link: https://codeforces.com/contest/118/problem/A
 * Submission ID: 384496704
 * Language: C++23 (GCC 14-64, msys2)
 * Execution Time: 92 ms | Memory: 100 KB
 * Verdict: OK
 * Rating: 1000 | Tags: implementation, strings
 * Submitted At: Mon, 27 Jul 2026 10:28:32 GMT
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl &#39;\n&#39;
const int N = 1e6;


void boom(){
    string s; cin >> s;
    for (int i=0;i<s.size();i++){
        if (s[i] == &#39;A&#39; || s[i] == &#39;E&#39; || s[i] == &#39;I&#39; || s[i] == &#39;O&#39; || s[i] == &#39;U&#39; || s[i] == &#39;a&#39; || s[i] == &#39;e&#39; || s[i] == &#39;i&#39; || s[i] == &#39;o&#39; || s[i] == &#39;u&#39; || s[i] == &#39;Y&#39; || s[i] == &#39;y&#39;){

        }else {
            cout << &#39;.&#39;;
            if(s[i]==&#39;B&#39;) cout << &#39;b&#39;;
            else if(s[i]==&#39;C&#39;) cout << &#39;c&#39;;
            else if(s[i]==&#39;D&#39;) cout << &#39;d&#39;;
            else if(s[i]==&#39;F&#39;) cout << &#39;f&#39;;
            else if(s[i]==&#39;G&#39;) cout << &#39;g&#39;;
            else if(s[i]==&#39;H&#39;) cout << &#39;h&#39;;
            else if(s[i]==&#39;J&#39;) cout << &#39;j&#39;;
            else if(s[i]==&#39;K&#39;) cout << &#39;k&#39;;
            else if(s[i]==&#39;L&#39;) cout << &#39;l&#39;;
            else if(s[i]==&#39;M&#39;) cout << &#39;m&#39;;
            else if(s[i]==&#39;N&#39;) cout << &#39;n&#39;;
            else if(s[i]==&#39;P&#39;) cout << &#39;p&#39;;
            else if(s[i]==&#39;Q&#39;) cout << &#39;q&#39;;
            else if(s[i]==&#39;R&#39;) cout << &#39;r&#39;;
            else if(s[i]==&#39;S&#39;) cout << &#39;s&#39;;
            else if(s[i]==&#39;T&#39;) cout << &#39;t&#39;;
            else if(s[i]==&#39;V&#39;) cout << &#39;v&#39;;
            else if(s[i]==&#39;W&#39;) cout << &#39;w&#39;;
            else if(s[i]==&#39;X&#39;) cout << &#39;x&#39;;
            else if(s[i]==&#39;Z&#39;) cout << &#39;z&#39;;
            else {
                cout << s[i];
            }
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while(t--) boom();
    return 0;
}