#include<bits/stdc++.h>
using namespace std;


void solve(vector<int> &nums, vector<vector<int>> &ans, int index) {

     // base case

     if(index >= nums.size()) {
          ans.push_back(nums);
          return;
     }

     for(int i=index; i<nums.size(); i++) {
          swap(nums[index], nums[i]);
          solve(nums, ans, index+1);
          swap(nums[index], nums[i]);
     }

}

vector<vector<int>> permute(vector<int> &nums) {

     vector<vector<int>> ans;
     solve(nums, ans, 0);

     return ans;
}

int main() {
     vector<int> nums = {1,2,3};

     vector<vector<int>> ans = permute(nums);

     for(auto i: ans) {
          for(auto j : i) {
               cout << j;
          }
          cout << endl;

     }
}
