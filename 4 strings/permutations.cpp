#include<iostream>
using namespace std;

void permute(string s, int l, int r) {

     if(l == r) {
          cout << s << "\n";
          return;
     } else {
          
          for(int i=l; i<=r; i++) {

               // swaping 
               swap(s[i], s[l]);

               //recursion
               permute(s, l+1, r);

               //backtracking
               swap(s[i], s[l]);
          }
     }
}

int main() {
     string s = "ABCD";
     permute(s, 0, s.size()-1);
}
