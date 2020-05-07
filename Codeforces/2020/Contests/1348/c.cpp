#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}
 
template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1e18;
const ll MOD = 998244353;
const ll MX = 1000001;

int N, K;

void solve() {
    cin >> N >> K;
    vector<char> a(N);
    map<char, int> cnt;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = K; i < N; i++) {
        cnt[a[i]]++;
    }
    
    if (a[0] != a[K - 1]) {
        cout << a[K - 1] << "\n";
        return;
    }
    
    if (K == 1) {
        for (auto& i : a) cout << i;
        cout << "\n";
        return;
    }
    
    cout << a[K - 1];
    if (cnt.size() == 1) {
        for (auto& letter : cnt) {
            for (int i = 0; i < ceil((double)letter.second / K); i++) {
                    cout << letter.first; 
            }
        }
        cout << "\n";
        return;
    }
    
    for (auto& letter : cnt) {
        for (int i = 0; i < letter.second; i++) cout << letter.first;
    }

    cout << "\n";
}

int main() {
	cin.sync_with_stdio(0); cin.tie(0);
    ll T; cin >> T;
    while (T--) solve();
    return 0;
    // You should actually read the stuff at the bottom
}

/* Stuff to Look For
 * -----------------
 * Int overflow, array bounds
 * Initializing all variables, avoid weird behavior
 * Edge cases(n = 0, n = 1)
 * Just return 0 after result
 */
