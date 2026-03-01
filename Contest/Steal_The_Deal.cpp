#include <bits/stdc++.h>


using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(n);
    long long total_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    // If K is 1, the coupon applies to 1 item and changes its price to its own price.
    // If K > N, we cannot choose exactly K items.
    if (k <= 1 || k > n) {
        cout << total_sum << "\n";
        return;
    }
    
    // Sort the prices in ascending order
    sort(a.begin(), a.end());
    
    // Calculate the maximum savings
    long long savings = 0;
    long long cheapest_price = a[0];
    
    // We apply the coupon to the absolute minimum element (a[0]) 
    // and the (k - 1) strictly maximum elements at the end of the sorted array.
    for (int i = n - 1; i >= n - k + 1; --i) {
        savings += (a[i] - cheapest_price);
    }
    
    // The minimum amount Alice needs to pay
    cout << total_sum - savings << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}