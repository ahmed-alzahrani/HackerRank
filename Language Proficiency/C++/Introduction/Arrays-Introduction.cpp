#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    int list [n] = {};

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      list[i] = x;
    }

    for (int i = (n - 1); i >= 0; i--) {
      printf("%d ", list[i]);
    }

    return 0;
}
