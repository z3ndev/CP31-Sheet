#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
const int INF = 1e9;
const int MOD = 1e9 + 7;
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif
template <typename T, typename U>
inline void amin(T &x, U y) {
   if (y < x) x = y;
}
template <typename T, typename U>
inline void amax(T &x, U y) {
   if (x < y) x = y;
}
void solve() {
   int num;
   cin >> num;
   if ((num + 1) % 3 == 0 || (num - 1) % 3 == 0) {
      cout << "First" << endl;

   } else
      cout << "Second" << endl;
}
int32_t main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
