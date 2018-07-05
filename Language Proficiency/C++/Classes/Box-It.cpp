#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>
using namespace std;

class Box {
  private:
    int l; // length
    int b; // breadth;
    int h; // height;

  public:
    Box();
    Box(int length, int breadth, int height);
    Box(const Box &copyBox);

    friend ostream& operator<<(ostream& os, const Box& box);

    friend bool operator<(Box& A, Box& B) {
      if ( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.h) && (A.b == B.b))) {
        return true;
      } else {
        return false;
      }
    }

    int getLength() {
      return l;
    }

    int getBreadth() {
      return b;
    }

    int getHeight() {
      return h;
    }

    void setLength(int length) {
      l = length;
    }

    void setBreadth(int breadth) {
      b = breadth;
    }

    void setHeight(int height) {
      h = height;
    }

    long long CalculateVolume() {
      long long volume = l;
      volume *= b;
      volume *= h;
      return volume;
    }
};

Box::Box()
{
  l = 0;
  b = 0;
  h = 0;
}

Box::Box(int length, int breadth, int height)
{
  setLength(length);
  setBreadth(breadth);
  setHeight(height);
}

Box::Box(const Box &copyBox)
{
  l = copyBox.l;
  b = copyBox.b;
  h = copyBox.h;

}

ostream& operator<<(ostream& os, const Box& box) {
  os << box.l << " " << box.b << " " << box.h;
  return os;

}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
