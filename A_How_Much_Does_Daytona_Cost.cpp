#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);
bool exist(int* arr, int len, int num) {
   for (int i = 0; i < len; i++) {
      if (arr[i] == num) {
         return true;
      }
   }
   return false;
}
void solve() {
   int len = 0;
   int num = INT_MIN;
   cin >> len >> num;
   int* arr = new int[len];
   for (int i = 0; i < len; i++) {
      cin >> arr[i];
   }
   if (exist(arr, len, num)) {
      cout << "YES" << endl;
   } else {
      cout << "NO" << endl;
   }
}
int main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
