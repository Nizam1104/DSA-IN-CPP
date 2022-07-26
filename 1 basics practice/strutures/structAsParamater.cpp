#include<iostream>
using namespace std;

struct Rectangle {
     int len;
     int wid;
};

int area(struct Rectangle r1) {
     int area = r1.len*r1.wid;
     return area;
}

void changelen(struct Rectangle *r1) {

     r1->len++;

}

void changewid(struct Rectangle &r1) {
     r1.wid++;
}

int main() {

     struct Rectangle r = {2,3};

     int a = area(r); // call by value

     changelen(&r); // call by address

     changewid(r); // call by reference;

     cout << "area = " << a << endl;

     cout << r.len << endl;

     cout << r.wid << endl;

}
