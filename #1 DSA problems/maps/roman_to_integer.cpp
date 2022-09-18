#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {

     unordered_map<char, int> mp = {
          {'I', 1},
          {'V', 5},
          {'X', 10},
          {'L', 50},
          {'C', 100},
          {'D', 500},
          {'M', 1000}
     };

     int i, ans =mp[s.back()];

     for(i=s.size()-2; i>=0; i--) {

          if(mp[s[i]] < mp[s[i+1]]) {

          ans -= mp[s[i]];

     } else if(mp[s[i]] >= mp[s[i+1]]) {

          ans += mp[s[i]];
     }

     }

     return ans;
}




int main() {

     // give input only in capital letters
     string s; cin >> s;

     cout << romanToInt(s) << endl;

}
