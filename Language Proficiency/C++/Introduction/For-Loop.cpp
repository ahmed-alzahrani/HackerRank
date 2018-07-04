#include <iostream>
#include <cstdio>
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

string EvenOdd(int n)
{
  if (n % 2 == 0) {
    return "even";
  } else {
    return "odd";
  }
}

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
      if (1 <= i && i <= 9) {
        cout << Stringify(i) << endl;
      } else {
        cout << EvenOdd(i) << endl;
      }
    }
    return 0;
}
