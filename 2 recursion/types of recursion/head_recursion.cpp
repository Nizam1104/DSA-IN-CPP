#include<iostream>
using namespace std;

void headrecursion(int x) {

     if(x > 0) {
     headrecursion(x-1);
     cout << x << "  ";
     }
}

int main() {
     int x=10;
     headrecursion(x);
}
