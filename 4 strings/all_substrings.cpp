#include<iostream>
using namespace std;

// time complexity : O(N^3)
// space complexity: O(1)
void all_substrs1(string s) {
     int i, n = s.size();

     for(i=0; i<n; i++) {
          for(int j =i; j<n; j++) {
               for(int k = i; k<=j; k++) {
                    cout << s[k] ;
               }
               cout << "\n";
          }
     }
}

// time complexity : O(N^2)
// space complexity: O(N)
void all_substrs2(string s) {
     int i, n = s.size();

     for(i=0; i<n; i++) {
          char temp[n-i-1];
          int tempindex = 0;
          for(int j =i; j<n; j++) {
               temp[tempindex++] = s[j];
               temp[tempindex] = '\0';
               printf("%s\n", temp);
          }
     }
}


int main() {
     string s; cin >> s;
     
     // all_substrs1(s);

     all_substrs2(s);
}
