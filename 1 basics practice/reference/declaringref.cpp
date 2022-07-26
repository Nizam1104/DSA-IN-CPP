#include<iostream>
using namespace std;

int main() {
     int a =1;
     int &r = a;

     cout << a << endl;
     r++;
     cout << r*a;
}