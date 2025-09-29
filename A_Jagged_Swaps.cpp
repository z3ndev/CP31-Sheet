#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define FAST_IO                 \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);

bool checkSorted(int* arr, int size) {
   for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
         return false;
      }
   }
   return true;
}
bool isPermutation(int* arr, int size) {
   for (int i = 0; i < size; i++) {
      if (arr[i] == 0 || arr[i] > size) {
         return false;
      }
   }
   for (int i = 0; i < size - 1; i++) {
      for (int j = i + 1; j < size; j++) {
         if (arr[j] == arr[i]) {
            return false;
         }
      }
   }
   return true;
}
void solve() {
   int len;
   cin >> len;
   int* arr = new int[len];
   for (int i = 0; i < len; i++) {
      cin >> arr[i];
   }
   if (!isPermutation(arr, len)) {
      cout << "NO" << endl;
      return;
   }
   if (checkSorted(arr, len)) {
      cout << "YES" << endl;
      return;
   }
   for (int i = 0; i < (len * (len - 1)) / 2; i++) {
      for (int j = 1; j < len - 1; j++) {
         if (arr[j - 1] < arr[j] && arr[j + 1] < arr[j]) {
            arr[j] = arr[j] ^ arr[j + 1];
            arr[j + 1] = arr[j + 1] ^ arr[j];
            arr[j] = arr[j] ^ arr[j + 1];
         }
      }
   }
   if (checkSorted(arr, len)) {
      cout << "YES" << endl;
      return;
   } else {
      cout << "NO" << endl;
   }
   delete[] arr;
}
int main() {
   FAST_IO;
   int t = 1;
   cin >> t;
   while (t--) solve();
   return 0;
}
