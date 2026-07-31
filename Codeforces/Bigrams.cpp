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
    vector<int> a(n);
    map<int, int> mp;
    bool ys = false;
    for (int i=0;i<n;i++)
    {
        int x; cin >> x;
        if (x>=3) ys = true;
        mp[x]++;
    }
    int cntpr = 0;
    for (auto [x,y]:mp)
    {
        if(x!=1){
            cntpr+=y;
        }
    }
    if (ys || cntpr >= 2){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

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