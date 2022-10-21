#include<map>
#include<iostream>

using namespace std;


int main() {
     // map<string, int> mp;

     // mp["n"] = 1;
     // mp["i"] = 2;
     // mp["z"] = 3;
     // mp["a"] = 4;
     // mp["m"] = 5;

     // cout << mp["n"];

     map<int , int> m;

     m[1] = 10;
     m[2] = 20;
     m[3] = 30;
     m[4] = 40;
     m[5] = 50;

     for(auto it: m) {
          // we can use first and second to access key and values respectively in a map
          cout << it.first << " : " << it.second <<  "\n";
     }
}
