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
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    if(n == 2) {
        cout << -1 << endl;
        return;
    }
    cout << 2 << " " << 4 << " " << 6 << " ";
    ll sum = 12;
    for (int i=4;i<=n;i++){
        cout << sum << " ";
        sum*=2;
    } 
    cout << endl;

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