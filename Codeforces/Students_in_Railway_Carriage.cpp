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