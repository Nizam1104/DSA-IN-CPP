#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n & (~(n-1)) == n) return true;
        else return false;
    }

int main() {
     int n; cin >> n;
     cout << isPowerOfTwo(n) << "\n";

}
