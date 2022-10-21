#include<iostream>
#include<math.h>
using namespace std;

int invert(int n) {
     int x = log2(n) + 1;

     for(int i=0; i<x; i++) {
          n = n ^ (1 << i);
     }
     return n;
}

int main() {
     int n ; cin >> n;
     cout << "before inverting n = " << n << "\n";
     n = invert(n);
     cout << "after inverting n = " << n << "\n";
}
