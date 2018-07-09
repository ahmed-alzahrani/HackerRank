#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    vector<int> vector;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      vector.push_back(x);
    }

    int x;
    cin >> x;
    x -= 1;

    vector.erase(vector.begin() + x);

    int start, end;
    cin >> start >> end;
    start -= 1;
    end -= 1;

    vector.erase(vector.begin() + start, vector.begin() + end);

    cout << vector.size() << '\n';

    for (int i = 0; i < (int) vector.size(); i++) {
      cout << vector[i] << " ";
    }

    return 0;
}
