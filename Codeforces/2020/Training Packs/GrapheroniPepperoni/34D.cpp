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
const int MX = 50005;

int N, R1, R2;
vi graph[MX];
int p[MX] = { 0 };

void dfs(int v, int parent = -1) {
	p[v] = parent;
	trav(child, graph[v])
	{
		if (child != p[v]) dfs(child, v);
	}
}

int main() {
	cin.sync_with_stdio(0); cin.tie(0);
	cin >> N >> R1 >> R2;
	p[R1] = -1;
	FOR(i, 1, N + 1)
	{
		if (p[i] == -1) continue;
		cin >> p[i];
		graph[i].pb(p[i]);
		graph[p[i]].pb(i);
	}
	
	dfs(R2);
	FOR(i, 1, N + 1)
	{
		if (p[i] != -1) cout << p[i] << " ";
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
