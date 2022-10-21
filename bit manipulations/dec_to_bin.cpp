#include<iostream>
using namespace std;

string d_to_b(int n) {

     string ans ="";
     while(n>0) {
          if(n%2) ans = '1'+ans;
          else ans = '0'+ ans;

          n = n/2;
     }

     return ans;
}

int main() {
     int n; cin >> n;
     string ans = d_to_b(n);
     cout << ans << "\n";
}
