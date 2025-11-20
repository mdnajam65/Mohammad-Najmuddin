#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a (positive integer): \n";
    int a;
    cin >> a;

    if (a <= 0) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    int num = (a % 2 == 1) ? a : (a - 1);
    
    for (int i = 0; i < num; ++i) {
        if (i) cout << ", ";
        cout << (1 + 2 * i);
    }

    return 0;
}
