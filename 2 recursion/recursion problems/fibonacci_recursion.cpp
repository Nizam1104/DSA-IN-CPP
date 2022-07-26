#include <iostream>
using namespace std;

void fib(int n1, int n2, int n) {
     int x = n1+n2;
     cout << x << "  " ;
     if(n ==0) return;

     n1 = n2;
     n2 = x;

     fib(n1, n2, n-1);
     
}

int main() {

     fib(0, 1 , 10);
     
}
