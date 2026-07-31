#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    int d,f;
    cin >> d >> f;
    int offset = d % 7;
    int n = f - offset;
    if (n <= 0) {
        n &#43;= 7;
    }
    cout << n << endl;
    return 0;
}
