#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    map<string, int> m;
    int queryCount, grade;
    cin >> queryCount;

    for (int i = 0; i < queryCount; i++) {
      int queryType;
      string name;
      cin >> queryType >> name;

      switch (queryType) {
        case 1:
          cin >> grade;
          m[name] += grade;
          break;
        case 2:
          m[name] = 0;
          break;
        case 3:
          cout << m[name] << endl;
          break;
      }
    }
    return 0;
}
