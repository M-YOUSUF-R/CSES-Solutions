/*
 * Problem Name: Concert_Tickets
 * Language: C++
 * Category: Sorting_and_Searching
 * Date: 2026-10-08
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
 
    vector<int> tickets(m);
    for (int i = 0; i < m; i++) {
        cin >> tickets[i];
    }
 
    sort(prices.begin(), prices.end());
 
    for (int i = 0; i < m; i++) {
        auto it = upper_bound(prices.begin(), prices.end(), tickets[i]);
 
        if (it == prices.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            prices.erase(it);
        }
    }
 
    return 0;
}