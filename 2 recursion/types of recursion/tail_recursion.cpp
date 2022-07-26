#include<iostream>
using namespace std;

void headrecursion(int x) {

     if(x > 0) {
     cout << x << "  ";
     headrecursion(x-1);
     }     
}

int main() {
     int x=10;
     headrecursion(x);
}
