#include<iostream>
#include<vector>

using namespace std;

int main() {
     vector<int> vec = {1,2,3,4,5}; // creates vector vec and assign elements;


     vector<int> v1(5,1); // creates vector v1 with size 5 and assign all 1 in it

     vector<int> v2(v1); // creates vector v2 and copy vector v1 into it

     for(int i=0; i<v.size(); i++) {
          cout << v[i] << endl;
     }

     cout << "vector capacity : " << vec.capacity() << endl;

     for(int i=0; i<vec.size(); i++) {
          cout << vec[i] << " ";
     }
     cout << endl;

     vec.push_back(6);
     vec.push_back(7);

     cout << "vector capacity : " << vec.capacity() << endl;

     for(int i=0; i<vec.size(); i++) {
          cout << vec[i] << " ";
     }

     cout << "element at index 2 :"<< vec.at(2) << endl;
     cout << "is array empty: "<< vec.empty() << endl; 

     cout << "first element is : " << vec.front() << endl;
     cout << "last element is : " << vec.back() << endl;

     vec.pop_back();
     cout << "last element after pop_back is : " << vec.back();

}