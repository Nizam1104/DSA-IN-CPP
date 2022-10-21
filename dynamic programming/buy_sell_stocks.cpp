


#include<iostream>
#include<vector>
using namespace std;


int main() {

     vector<int> prices = {7, 1, 5, 3, 6, 4};

     // vector<int> prices = {7, 6, 4, 3, 2, 1};

     int l =0, r = prices.size()-1;

     int min_ = prices[l], max_ = prices[r];

     l++, r++;

     while(l < r) {
          if(prices[l] < min_) {
               min_ = prices[l];
               
          } 
          if(prices[r] > max_) {
               max_ = prices[r];
          }

          if(prices[l] >= prices[r]) r--;
          else l++; 
     }

     if(max_ <= min_) {
          cout << 0 << "\n";
     } else {
          cout << max_ - min_ << "\n";
     }

}
