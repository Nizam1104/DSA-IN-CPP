/*

0-1 knap sack problem
*/

#include<iostream>
using namespace std;

int knapSack(int capacity, int index, int *weights, int *values) {

     if(capacity == 0 || index < 0) return 0;

     if(capacity < weights[index]) {
          knapSack(capacity, index-1, weights, values);
     }

     int include_item = weights[index] + knapSack(capacity- weights[index], index-1, weights, values);
     int excluded_item = knapSack(capacity, index-1, weights, values);

     return max(include_item, excluded_item);

}

int main() {
     int weihgts[] = {1,2};
     int values[] = {3,2};

     int capacity = 1;

     int ans = knapSack(capacity, (sizeof(weihgts)/ sizeof(weihgts[0])) - 1, weihgts, values);

     cout << ans << "\n";

}
