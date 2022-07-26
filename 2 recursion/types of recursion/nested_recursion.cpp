#include<iostream>
using namespace std;
int nested(int n) {

     if(n >10) {
          return n-3;
     } else {
          return nested(nested(n+4));
     }
}

int main() {
     int x = 3;

     cout << nested(x);
}
