#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, queryCount;
    cin >> n >> queryCount;

    // create a 2d vector of size n
    vector<vector<int>> vector(n);

    // loop for n, the number of arrays in the Vector
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;

      // resize each 1d vector in 'vector' to be the correct size based on k;
      vector[i].resize(k);

      for (int x = 0; x < k; x++) {
        // read in the k values into the correct 1d vector
        cin >> vector[i][x];
      }
    }

    // for the number of queries we're told we need to make
    for (int query = 0; query < queryCount; query++) {
      // get the indices
      int i, j;
      cin >> i >> j;
      // display the value at that index on its own line
      cout << vector[i][j] << endl;
    }
    return 0;
}
