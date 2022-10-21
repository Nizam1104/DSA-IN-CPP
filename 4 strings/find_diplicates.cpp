#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<char, int> findDuplicates(string s) {
     unordered_map<char, int> mp;

     for(int i=0; i<s.size(); i++) {
          mp[s[i]]++;
     }

     return mp;
}

int main() {
     string s; cin >> s;

     unordered_map<char, int> ans = findDuplicates(s);

     for(auto it: ans) {
          if(it.second > 1) cout << it.first << "--" <<  it.second << "\n";
     }
}
