#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);

int sum(int* arr, int len) {
   int ans = 0;
   for (int i = 0; i < len; i++) {
      ans += arr[i];
   }
   return ans;
}
void solve() {
   int len = 0;
   cin >> len;
   int* arr = new int[len - 1];
   for (int i = 0; i < len - 1; i++) {
      cin >> arr[i];
   }
   int ans = sum(arr, len - 1);
   cout << (-ans) << endl;
}
int main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
