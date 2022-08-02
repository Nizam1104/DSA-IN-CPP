#include<iostream>
using namespace std;

int main() {
     string name = "mnv";
     char temp;
     int n = name.length();
     for(int i=0; i<n/2; i++) {
          temp = name[i];
          name[i] = name[n-i-1];
          name[n-i-1] = temp;
     }

     cout << name;
}
