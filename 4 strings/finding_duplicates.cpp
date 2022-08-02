//finding duplicates using hashmap

#include<iostream>
using namespace std;

int main() {
     string s = "finding";
     int h[26]={0}, i;

     for(i=0; s[i]!=0; i++) {
          h[s[i] - 97]+=1;
     }

     for(i=0; i<26; i++) {
          if(h[i] >1) {
               printf("%c", i+97);
               printf("%d\n", h[i]);

          }
     }
}
