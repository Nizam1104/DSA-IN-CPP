#include<iostream>
using namespace std;

int power(int x , int n) {

     if(n == 0) return 1;
     else return power(x, n-1)*x;
}

// below is efficient version of above function

int pow(int x, int n) {
     if(n == 0) return 1;

     if(n %2 == 0) {
          return pow(x*x , n/2);
     } else {
          return x*pow(x*x, (n-1)/2);
     }


}

int main() {
     int x = 2;
     int n =5;

     cout << power(x ,n) << endl;
     cout << pow(x,n);
}
