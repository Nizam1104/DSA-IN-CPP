/*
leetcode problem
link : https://leetcode.com/problems/valid-parentheses/
*/
/* input sholud only be combination of paranthesis 
like "(){}[]", "(}[]" . 

*/

#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if(st.empty() || (st.top() == '(' && s[i] != ')') || (st.top() == '[' && s[i] != ']') || (st.top() == '{' && s[i] != '}')) return false;
                st.pop();
            }
        }
        return st.empty();
    }

int main() {
     string s; cin >> s;

     cout << isValid(s);
}
