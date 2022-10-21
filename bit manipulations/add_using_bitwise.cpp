#include<iostream>
using namespace std;

int add(int a, int b) {
     while(b != 0) {
          unsigned carry = a & b;
          a = a ^ b;
          b = carry << 1;
     }

     return a;
}

int main() {
     int a = 4, b = 6;

     int ans = add(a,b);

     cout << ans << "\n";
}
