#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);
void solve() {
   int n;  // stations
   int x;  // reach
   cin >> n >> x;
   int* stations = new int[n];
   int capacity = INT_MIN;
   for (int i = 0; i < n; i++) {
      cin >> stations[i];
   }
   int maxDistance = 0;
    maxDistance = stations[0] - 0;
   if (maxDistance > capacity) {
      capacity = maxDistance;
   }
   for (int i = 1; i < n; i++) {
      maxDistance = stations[i] - stations[i - 1];
      if (maxDistance > capacity) {
         capacity = maxDistance;
      }
   }
   maxDistance = 2 * (x - stations[n - 1]);
   if (maxDistance > capacity) {
      capacity = maxDistance;
   }
   cout << capacity << endl;
}
int main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
