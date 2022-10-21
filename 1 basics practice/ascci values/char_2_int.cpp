#include<iostream>
using namespace std;

int main() {
     string num = "123";

     // int n=0;
     // for(int i=0; i<3; i++) {
     //      n = n*10 + (char)
     // }

     cout << (int)'1' << "\n";
}

#include<bits/stdc++.h>
using namespace std;

int main() {
     string arr[10] = {"practice", "makes", "perfect", "coding", "makes"};
     string word1 = "makes", word2 = "coding";

     int w1po=0, w2po=0;
     int distance = INT_MAX;
     int count =0;
     for(auto i: arr) {
          if(i == word1) {
               w1po = count;
          }
          
          if(i == word2) {
               w2po = count;
          }

          distance = abs(w1po-w2po);

          count++;
     }

     cout << distance << endl;

}
