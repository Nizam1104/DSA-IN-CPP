#include<iostream>
using namespace std;

void swapnums(int x, int y) {
     int temp ;
     temp = x;
     x = y;
     y= temp;

}
 int main() {

     int a=1, b=2;

     swapnums(a,b);

     cout << a << " " << b;


 }
 