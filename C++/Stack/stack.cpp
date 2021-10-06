// Main function of the C++ program.

#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

class Stack {

    private:
    int top = -1, item[SIZE];

    public:
    bool isempty()
    {
      if(top==-1)
      return true;
      else
      return false;
    }
    void push(int value)
    {
      if(top==SIZE-1)
      {    cout<<"Stack is full!\n";
      }
       else
      {
        top++;
        item[top]=value;
      }
    }
    void pop()
    {
     if(isempty())
      cout<<"Stack is empty!\n";
     else
      top--;
    }

    void showTop()
    {
     if(isempty())
      cout<<"Stack is empty!\n";
     else
      cout<<"Element at top is: "<< item[top]<<"\n";

    }
    void display()
    {
      if(isempty())
     {
        cout<<"Stack is empty!\n";
     }
     else
     {
      for(int i=0 ; i<=top; i++)
        cout<<item[i]<<" ";
       cout<<"\n";

      }

    }


};

// Driver code
int main()
{
      Stack st;

  //pop is not possible on empty stack
   st.pop();

      //enQueue 5 elements
      st.push(1);
      st.push(2);
      st.push(3);
      st.push(4);
      st.push(5);

      // 6th element can't be added to because the stack is full
      st.push(6);

      st.display();

      //pop the last element
      st.pop();
       // show top element
       st.showTop();
      //Now we have just 4 elements
      st.display();

    return 0;
}
/* 
Output: 
Stack is empty!
Stack is full!
1 2 3 4 5 
Element at top is: 4
1 2 3 4

*/
