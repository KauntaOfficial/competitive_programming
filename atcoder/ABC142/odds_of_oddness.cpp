#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
    {
        cout <<  "1";
    } else if (n % 2 == 0) {
        cout << "0.5";
    } else {
        cout << (float)((n/2) + 1)/n;
    }
}
