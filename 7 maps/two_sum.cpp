#include<map>
#include<vector>
#include<iostream>
using namespace std;

vector<int> two_sum(vector<int> &nums, int target) {

     vector<int> v;
     map<int, int> mp;

     for(int i=0; i<nums.size(); i++) {

          if(mp.find(target-nums[i]) != mp.end()) {
               v.push_back(mp[target-nums[i]]+1);
               v.push_back(i+1);
               return v;
          }

          else mp[nums[i]] = i;
     }
     return v;
}

int main() {
     vector<int> nums = {1,5,3,6,8,7,0,3};

     vector<int> v = two_sum(nums, 10);

     cout << v[0] << " " << v[1];
}
