#include<bits/stdc++.h>
using namespace std;

int b_to_d(string s) {

     long long int ans =0;
     for(int i=s.size()-1; i>=0; i--) {
          if(s[i] == '1') {
               ans = ans + pow(2,i);
          }
     }

     return ans;
}

int main() {
     string s; cin >>s;
     long long int ans = b_to_d(s);
     cout << ans << "\n";
}
