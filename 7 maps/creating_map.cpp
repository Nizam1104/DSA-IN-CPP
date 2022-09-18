#include<map>
#include<iostream>

using namespace std;


int main() {
     map<string, int> mp;

     mp["n"] = 1;
     mp["i"] = 2;
     mp["z"] = 3;
     mp["a"] = 4;
     mp["m"] = 5;

     cout << mp["n"];
}
