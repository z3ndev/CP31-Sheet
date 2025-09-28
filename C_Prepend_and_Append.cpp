#include <bits/stdc++.h>

using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);
void solve() {
   int length;
   cin >> length;
   string input;
   cin >> input;
   while ((!input.empty()) &&
              (input.at(0) == '0' && input.at(input.size() - 1) == '1') ||
          (input.at(0) == '1' && input.at(input.size() - 1) == '0')) {

      input = input.substr(1, input.size() - 2);
   }
   cout << input.size() << endl;
}
int main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
