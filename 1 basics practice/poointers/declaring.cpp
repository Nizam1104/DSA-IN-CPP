#include <iostream>
using namespace std;

int main() {
     int a =1;
     int *p = &a;

     int *ptr ;

     cout << a  << " "<< *p << endl;

     ptr = new int[5];

     for(int i=0; i<5; i++) {
          ptr[i] = i;

     }

     for(int i=0; i<5; i++) {
          cout << ptr[i] << " ";
     }

}
