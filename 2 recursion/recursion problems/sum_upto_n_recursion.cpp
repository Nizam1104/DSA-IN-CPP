#include <iostream>
using namespace std;

int sum_n(int n) {
     if(n == 1) {
          return 1;
     }

     return n+sum_n(n-1);
}

int main() {
     int n;
     cout << "enter n: ";
     cin >> n;
     cout << sum_n(n);
}