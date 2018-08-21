#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int prof_id = 1;
static int student_id = 1;

class Person
{
public:
  int age;
  string name;
  virtual void getdata(){}
  virtual void putdata(){};
};

class Professor: public Person
{
public:
  int publications;
  int cur_id;
  Professor()
  {
    cur_id = prof_id;
    prof_id++;
  }

  void getdata() {
    int a, p;
    string n;
    cin >> n >> a >> p;

    name = n;
    age = a;
    publications = p;
  }

  void putdata() {
    cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
  }
};

class Student: public Person
{
public:
  int cur_id;
  int marks[5];
  int sum;
  Student()
  {
    cur_id = student_id;
    student_id++;
  }
  void getdata() {
    int m0, m1, m2, m3, m4, m5, a;
    string n;
    cin >> n >> a >> m0 >> m1 >> m2 >> m3 >> m4 >> m5;

    name = n;
    age = a;
    marks[0] = m0;
    marks[1] = m1;
    marks[2] = m2;
    marks[3] = m3;
    marks[4] = m4;
    marks[5] = m5;
    sum = m0 + m1 + m2 + m3 + m4 + m5;
  }

  void putdata() {
    cout << name << ' ' << age << ' ' << sum << ' ' << cur_id << endl;

  }

};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
