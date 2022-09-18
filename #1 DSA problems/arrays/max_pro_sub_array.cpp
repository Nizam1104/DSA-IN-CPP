/*

input --> array of nums

output --> max product of subarray

example: 
     arr = [2, 3, -2, 4]

     o/p = 6
*/



#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums) {
     int minpro = 1, maxpro = 1, best = INT_MIN;

     for(int i: nums) {
          if(i < 0) {
               swap(minpro, maxpro);
          }

          minpro = min(minpro*i, i);
          maxpro = max(maxpro*i, i);

          best = max(maxpro, best);
     }

     return best;
}


int main() {
     vector<int> nums = {2, 3, -2, 4};

     int max_pro =maxProduct(nums);

     cout << max_pro << endl;
}
