#include<iostream>
#include<string>

using namespace std;

string addBinary(string a, string b)
{
        string s = "";
        
        int c = 0, i = a.size() - 1, j = b.size() - 1;
        while(i >= 0 || j >= 0 || c == 1)
        {
            c += i >= 0 ? a[i --] - '0' : 0;
            c += j >= 0 ? b[j --] - '0' : 0;
            s = char(c % 2 + '0') + s;
            c /= 2;
        }
        
        return s;
}


int main() {
     string a = "1001" , b = "101";

     int i=1;

     // cout << a[--i] << endl;

     // cout << i << endl;

     // string ans = addBinary(a, b);

     // cout << ans << endl;

     // cout << 1 - '0';

     cout << (int)'5' - (int)'1';

}
