#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cd=0;
        for (int i=0;i<n;i&#43;&#43;) {
            cin >> a[i];
        }
        for (int i=0;i<n;i&#43;&#43;) {
            if (a[i]%2!=0) cd&#43;&#43;;
        }
        cout << cd << endl;
    }
    return 0;
}