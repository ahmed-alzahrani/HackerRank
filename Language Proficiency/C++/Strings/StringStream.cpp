#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> vector;
  int i;
  stringstream stream(str);

  while (stream >> i)
  {
    vector.push_back(i);

    if (stream.peek() == ',')
     {
      stream.ignore();
    }
  }
  return vector;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < (int) integers.size(); i++) {
      cout << integers[i] << '\n';
    }

    return 0;
}
