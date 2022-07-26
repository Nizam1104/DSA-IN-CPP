#include<iostream>
using namespace std;

class Rectangle 
{
     private:
     int len;
     int wid;

     public:
     Rectangle(int l, int w) {
          len = l;
          wid = w;

     }

     int area() {
          return len*wid;

     }

     void changelen(int l) {

          len = l;

     }

     void printlen() {
          cout << len << "," << wid ;
     }

};

int main() {

     Rectangle r(2,3);

     int a = r.area();

     cout << a << endl;
     r.changelen(4);

     r.printlen();

}


