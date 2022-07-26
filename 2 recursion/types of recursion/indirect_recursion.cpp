#include<iostream>
using namespace std;

void fun1(int x);
void fun2(int x);

void fun1(int n) {
     if (n >0) {
          cout << n << "  ";
          fun2(n -1);
     }
}

void fun2(int n) {
     if(n >0) {
          cout << n << "  " ;
          fun1(n-1); 
     }
}

int main() {
     int x =10;
     fun1(x);
}
