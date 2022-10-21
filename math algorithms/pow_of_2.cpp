#include<iostream>
using namespace std;

bool isPowOfTwo(int n) {
     if(n == 0) return false;

     if(n && (n-1) == n) return true;
     else return false;
}

int main() {
     int n; cin >> n;

     // cout << (int)isPowOfTwo(n);

     cout << bool(8 & 7);
}