/*
problem link: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/submissions/
*/

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:

    bool isAnagram(string str1, string str2){
        
        int len1 = str1.size(), len2 = str2.size();
        if(len1 != len2)
            return false;
        
        int freq[26] = {0};
        
        for(int idx = 0; idx < len1; idx++)
             freq[str1[idx]-'a']++;
        
        for(int idx = 0; idx < len2; idx++)
             freq[str2[idx]-'a']--;
        
        for(int idx = 0; idx < 26; idx++)
             if(freq[idx] != 0)
                 return false;
        
        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        
        int  i=0, j=1;

        while(j < words.size()) {
            
            if(isAnagram(words[i], words[j])) {
                words.erase(words.begin()+j);
            } else {
                i++;
                j++;
            }
        }

        return words;
    }

};


int main() {
     vector<string> v = {"abba","baba","bbaa","cd","cd"};

     Solution s;

     s.removeAnagrams(v);

     for(auto it: v) {
          cout << it << "  ";
     }
}
