#include<iostream>
using namespace std;

float calc_sqrt(float n) {

     float x = n;
     float y = 1;
     float e = 0.01; // e is accuracy level, don't use high accuracy for large value of n


     while((x-y) > e) {

          x = (x+y)/2;
          y = n/x;

     }

     
     return x;

}

// below function do not give accurate root value,
// it gives floor value of root
float c_sqrt(float n) {
     long r = n;

     while (r*r > n)
     {
          r = (r+n/r)/2;
     }

     return r;
}

int main() {
     
     cout << "enter n value: ";
     int n; cin >> n;

     cout << "square root of n is : " << calc_sqrt(n) << endl;

     // cout << "square root of n is : " << c_sqrt(n) << endl;

}