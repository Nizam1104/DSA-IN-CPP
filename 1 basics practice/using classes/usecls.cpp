#include <iostream>
using namespace std;

class Rectangle 
{
     private:
     int len;
     int wid;

     public:

     Rectangle() {len=wid=1;}

     Rectangle(int l, int w);

     int area();

     int perimeter();

     int getlen() {
          return len;
     }

     void setlen(int l );

};

Rectangle::Rectangle(int l , int w) {
     len = l;
     wid = w;
}

int Rectangle::area() {
     return len*wid;
}


int Rectangle::perimeter() {
     return 2*(len+wid);
}

void Rectangle::setlen(int l) {
     len = l;
}


int main() {
     Rectangle r(3,4);

     cout << "area of rectangle = " << r.area() << endl;
     cout << "perimeter = " << r.perimeter() << endl;

     cout<< "len before set = " << r.getlen() << endl;
     r.setlen(5);
     cout << "len after set = " << r.getlen() << endl;

     cout << "area after set = " << r.area() << endl;
     
}