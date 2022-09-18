#include<iostream>
using namespace std;


int main() {
     char a = 'A', z = 'Z';

     int i = (int)a, j = (int)z;

     while(i<j) {
          cout << (char)i++ << "  ";
     }
}
