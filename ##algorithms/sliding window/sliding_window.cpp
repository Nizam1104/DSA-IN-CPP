/*
resource: https://www.scaler.com/topics/sliding-window-algorithm/
*/

/*
to find maximum sum of three adjacent elements in an array
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int find_sum(vector<int> v) {
     int max_sum = v[0] + v[1] + v[2];
     int cur_sum = max_sum;

     for(int i=3; i<v.size(); i++) {
          cur_sum = cur_sum + v[i] - v[i-3];
          max_sum = max(cur_sum, max_sum);
     }
     return max_sum;
} 

int main() {
     vector<int> v = {21, 23, 24, 22, 22, 21, 20, 23, 22, 21, 24, 20};

     int max_sum = find_sum(v);
     cout << max_sum << "\n";
}
