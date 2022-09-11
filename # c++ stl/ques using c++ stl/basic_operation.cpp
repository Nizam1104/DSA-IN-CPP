#include<iostream>
#include<deque>

using namespace std;

int main() {
     deque<int> dq;
     dq.push_back(2);
     dq.push_front(1);
     dq.push_back(3);
     dq.push_back(4);

     for(int i: dq) {
          cout << i << endl; 
     }

     dq.pop_back();
     dq.pop_front();

     cout << "after poping: \n";
     for(int i: dq) {
          cout << i << endl; 
     }

     dq.push_front(1);
     dq.push_back(4);

     cout << dq.front() << endl;

}
