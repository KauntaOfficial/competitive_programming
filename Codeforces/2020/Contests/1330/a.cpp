#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld; 
typedef double db; 
typedef string str; 
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl; 
typedef pair<ld,ld> pd; 
 
typedef vector<int> vi; 
typedef vector<ll> vl;
typedef vector<ld> vd; 
typedef vector<str> vs; 
typedef vector<pi> vpi;
typedef vector<pl> vpl; 
 
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
 
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound 
#define ub upper_bound 
 
const int MOD = 998244353;
const ll INF = 1e18;
const int MX = 1000001;
 
int T, N, X, A;
bitset<300> placed;
 
int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    cin >> T;
    while (T--) {
        cin >> N >> X;
        placed.reset();
        F0R(i, N) {
            cin >> A;
            placed[A - 1] = 1;
        }
        int used = 0, place = 1;
        F0R(i, 300) {
            place = i;
            if (placed[i]) continue;
            else {
                if (used < X) {
                    used++;
                } else break;
            }
        }
        cout << place << "\n";
    }
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
