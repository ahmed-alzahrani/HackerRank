#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;


string Stringify(int n)
{
  switch (n) {
    case 1:
      return "one";
      break;
    case 2:
      return "two";
      break;
    case 3:
      return "three";
      break;
    case 4:
      return "four";
      break;
    case 5:
      return "five";
      break;
    case 6:
      return "six";
      break;
    case 7:
      return "seven";
      break;
    case 8:
      return "eight";
      break;
    case 9:
      return "nine";
      break;
    default:
      return "default";
      break;
  }
}


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (1 <= n && n <= 9) {
      cout << Stringify(n) << endl;
    } else {
      cout << "Greater than 9" << endl;
    }
    return 0;
}
