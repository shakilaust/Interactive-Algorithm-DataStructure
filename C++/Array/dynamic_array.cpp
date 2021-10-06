#include <bits/stdc++.h>
using namespace std;

int main()
{
    
       vector < int > nums;
       // add values;
       nums.push_back(10);
       nums.push_back(30);
       nums.push_back(-10);
       // print values 
       for( int i = 0 ; i < nums.size() ; i++ ) {
           cout <<  i  <<  " idx  value is " << nums[i] << endl;
       }
       
       // change value 
       nums[0] =  120;
      
       cout << "idx 0 value now " << nums[0] << endl;
       
       // remove a particular index value 
       nums.erase( nums.begin() + 1 );
       
       // print all values
       for( int num: nums ) {
           cout << num << endl;
       }
       
    return 0;
}
