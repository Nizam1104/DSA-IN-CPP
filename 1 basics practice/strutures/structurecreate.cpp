#include<iostream>

using namespace std;

struct rectangle {
     int len;
     int wid;
};

int main() {
     struct rectangle r1 = {1,2};

     struct rectangle r2;
     r2.len = 2;
     r2.wid = 3;

     cout << r1.len << endl;

     cout << "area of r2 = " << r2.len*r2.wid;
      
}
