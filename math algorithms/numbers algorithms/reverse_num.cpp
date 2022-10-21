#include<iostream>
using namespace std;

int main() {

     int n; cin >> n;
     int ans = 0, temp;
     while(n > 0) {
          temp = n%10;
          ans = ans*10 + temp;
          n = n/10;
     }

     cout << ans << endl;
}
