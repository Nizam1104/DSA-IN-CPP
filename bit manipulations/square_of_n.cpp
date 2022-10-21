//finding square of a number using bitwise operators


#include<iostream>
using namespace std;

long long square(int n) {
     if(n == 0) return 0;

     if(n < 0) n = -n;

     int x = n  >> 1;
     if(n&1) {
          return (square(x) << 2) + (x << 2) + 1;
     } else {
          return (square(x) << 2);
     }

}

int main() {
     int n; cin >> n;
     long long ans = square(n);

     cout << ans << "\n";
     
}
