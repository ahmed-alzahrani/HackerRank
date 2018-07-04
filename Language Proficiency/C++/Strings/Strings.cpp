#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  
  string str;
  string str2;
  cin >> str;
  cin >> str2;

  int length = str.length();
  int length2 = str2.length();

  cout << length << ' ' << length2 <<'\n';
  cout << str << str2 << '\n';

  char swap = str[0];
  str[0] = str2[0];
  str2[0] = swap;

  cout << str << ' ' << str2;

  return 0;
}
