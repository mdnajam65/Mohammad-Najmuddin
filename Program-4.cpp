#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "enter number of elements n: \n";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) 
      cin >> arr[i];

    vector<int> counts(10, 0); // index 1..9 used
    for (int x : arr) {
        for (int d = 1; d <= 9; ++d) {
            if (x % d == 0) counts[d]++;
        }
    }

    cout << "{";
    for (int d = 1; d <= 9; ++d) {
        cout << d << ": " << counts[d];
        if (d != 9) cout << ", ";
    }
    cout << "}\n";
    return 0;
}
