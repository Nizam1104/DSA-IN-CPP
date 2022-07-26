#include <iostream>
using namespace std;

// struct Rectangle {
//      int len;
//      int wid;
// };

// int main() {

//      struct Rectangle *p;

//      p = (struct Rectangle*)(malloc(sizeof(struct Rectangle)));

//      int a =(*p).len = 1;
//      (*p).wid = 2;

//      cout << "length is " << a << endl;
//      cout << "width is " << (*p).wid << endl ;
//      cout << p->len;

// }

struct Rectangle {
     int len;
     int wid;

};

int main() {
     struct Rectangle *p;

     p = (struct Rectangle*)(malloc(sizeof(struct Rectangle)));

     (*p).len = 1;
     p->wid =2;

     cout << "len = " << p->len << endl;
     cout << "wid = " << (*p).wid ;
}