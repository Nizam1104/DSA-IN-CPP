#include<iostream>
using namespace std;

int count_bits(int n) {
     int ans = 0;
     while(n > 0) {
          
          if(n & 1) {
               ans++;
              n = n >> 1;
          } else {
              n = n >> 1;
          }
     }

     return ans;
}

int main() {
     int n; cin >> n;
     cout << count_bits(n) << "\n";
}
