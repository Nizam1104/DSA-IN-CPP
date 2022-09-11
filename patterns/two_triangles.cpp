/*
* * * *
 * * *
  * *
   *
   *
  * * 
 * * *
* * * *
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     int n; cin >> n;

     int i,j,k;

     for(int i=0; i<n; i++) {
          for(int j=n-1; j>=i; j--) {
               cout << " ";
          }
          for(int k=0; k<=i; k++) {
               cout << "* ";
          }
          cout << endl;
     }

     for(i=0; i<n; i++) {
          for(j=0; j<i; j++) {
               cout << " ";
          }
          for(k=i; k<n; k++) {
               cout << " *";
          }
          cout << endl;
     }
     
}
