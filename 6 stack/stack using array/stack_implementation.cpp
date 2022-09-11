#include<iostream>
using namespace std;
#define max 1000

class stack {
     int top;

     public:
          int a[max]; // max stack size
          stack() {top = -1;}
          bool push(int x);
          int pop();
          int peek();
          bool isEmpty();

};

bool stack::push(int x)
{
     if (top >= (max-1)) {
          cout << "stackoverflow";
          return false;
     } else {
          a[++top] = x;
          cout << x << " pushed into stack" << endl;
     }
}

int stack::pop()
{
     if(top < 0) {
          cout << "stack underflow";
          return 0;
     } else {
          int x = a[top--];
          return x;
     }
}

int stack::peek() 
{
     if(top < 0) {
          cout << "stack is empty";
          return 0;
     } else {
          int x = a[top];
          return x;
     }
}

bool stack::isEmpty()
{
     return(top < 0);
}

int main() {
     class stack s;
     s.push(1);
     s.push(2);
     s.push(3);

     cout << s.pop() << " poped from stack";

     cout << ", top element is :" << s.peek() << endl;

     cout << "stack elements are: " << endl;

     while(!s.isEmpty()) {
          cout << s.peek() << " ";
          s.pop();
     }
}
