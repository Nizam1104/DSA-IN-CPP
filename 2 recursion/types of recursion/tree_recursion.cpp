#include <iostream>
using namespace std;

void tree(int x ) {
     if(x > 0) {
          cout << x << "  ";

          tree(x-1);
          tree(x-1);
          
     }
}

int main() {
     int x=3;
     tree(x);
}
