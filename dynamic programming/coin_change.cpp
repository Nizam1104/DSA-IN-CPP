#include<iostream>
#include<limits.h>
using namespace std;

int minCoins(int *coins, int target, int* dp) {

     if(target == 0) return 0;

     int ans = INT_MAX;

     for(int i=0; i<3; i++) {
          if(target - coins[i] >= 0) {
               int subans = 0;
               if(dp[target - coins[i]] != -1) {
                    subans = dp[target - coins[i]];
               } else {
                    subans = minCoins(coins, target - coins[i], dp);
               }

               if(subans != INT_MAX && subans+1 < ans) {
                    ans = subans+1;
               }
          }
     }

     return dp[target] = ans;
}


int main() {
     int target = 18;
     int coins[] = {1,5,7};
     int dp[18];
     fill(dp, dp+18, -1);
     dp[0] =0;

     cout << minCoins(coins, target, dp) << "\n";
}
