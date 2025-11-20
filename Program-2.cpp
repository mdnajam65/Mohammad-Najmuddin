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
    for (int i = 0; i < a; i++) {
        if (i) cout << ", ";
        cout << (1 + 2 * i);
    }
   
    return 0;
}
