#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vector;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      vector.push_back(x);
    }

    sort(vector.begin(), vector.end());

    for (int i = 0; i < n; i++) {
      cout << vector[i] << " ";
    }


    return 0;
}
