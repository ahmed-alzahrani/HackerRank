#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
  set<int> set;
  int queryCount;
  cin >> queryCount;

  for (int i = 0; i < queryCount; i++) {
    int queryType, num;
    cin >> queryType >> num;

    switch (queryType) {
      case 1:
        set.insert(num);
        break;
      case 2:
        set.erase(num);
        break;
      case 3:
        if (set.find(num) != set.end()) {
          cout << "Yes" << '\n';
        } else {
          cout << "No" << '\n';
        }
        break;
    }
  }
    return 0;
}
