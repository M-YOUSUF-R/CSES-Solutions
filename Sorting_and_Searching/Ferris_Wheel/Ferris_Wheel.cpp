/*
 * Problem Name: Ferris_Wheel
 * Language: C++
 * Category: Sorting_and_Searching
 * Date: 2026-10-05
 */

#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n,x;
  cin >> n>> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int i = 0 , j = n - 1, gondolas = 0;
  while (i <= j) {
    if (i == j) {
      gondolas++;
      break;
    }
    if (a[i] + a[j] <= x) {
      i++;
    }
    j--;
    gondolas++;
  }
  cout << gondolas << endl;
}