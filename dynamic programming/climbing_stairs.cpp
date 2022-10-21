/*
you are climbing stairs, which have n steps
each time you can climb 1 or 2 steps
find totla no of ways you can climb to the top
*/

#include<iostream>
using namespace std;

int no_of_ways(int steps) {
     int dp[steps+1];
     dp[1] = 1, dp[2] = 2;

     for(int i=3; i<=steps; i++) {
          dp[i] = dp[i-1] + dp[i-2];
     }

     return dp[steps];

     
}

int main() {
     int steps = 5;
     int ans = no_of_ways(steps);

     cout << ans << "\n";

}
