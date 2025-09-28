#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);
void solve() {
   char* input;
   int inputLen;
   cin >> inputLen;
   input = new char[inputLen + 1];
   for (int i = 0; i < inputLen; i++) {
      cin >> input[i];
   }
   input[inputLen] = '\0';
   int type1 = 0;
   int consecutiveDots = 0;
   for (int i = 0; i < inputLen; i++) {
      if (input[i] == '.') {
         consecutiveDots++;
         if (consecutiveDots == 3) {
            type1 = 2;
            break;
         }
      }
      if (input[i] == '#' || i == inputLen - 1) {
         if (consecutiveDots == 3) {
            type1 = 2;
            break;
         }
         if (consecutiveDots == 2) {
            type1 += 2;
            consecutiveDots = 0;
         }
         if (consecutiveDots == 1) {
            type1++;
            consecutiveDots = 0;
         }
         if (consecutiveDots == 0) {
         }
      }
   }
   cout << type1 << endl;
}
int main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
