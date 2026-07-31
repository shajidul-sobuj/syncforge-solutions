#include <bits/stdc&#43;&#43;.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    if (a%b==0) {
        cout << a/b << endl;
    }else {
        cout << (a/b)&#43;1 << endl;
    }
    return 0;
}