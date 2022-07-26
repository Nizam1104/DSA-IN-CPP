#include <iostream>
using namespace std;

struct student {
     int rollno;
     string cls;

};

int main () {
     struct student sturec[10];

     int a = sturec[0].rollno = 1;
     sturec[0].cls = "civ";

     sturec[1].rollno = 2;
     sturec[1].cls = "cs";

     cout << a;

     cout << sturec[0].cls;

}