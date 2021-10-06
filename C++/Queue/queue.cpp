// Main function of the C++ program.

#include <bits/stdc++.h>
using namespace std;

#define SIZE 5 
class Queue {
   private:
      int items[SIZE], front, rear;
    
       public:
      Queue() {
        front = -1;
        rear = -1;
      }
    
      bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
          return true;
        }
        return false;
      }
    
      bool isEmpty() {
        if (front == -1)
          return true;
        else
          return false;
      }
    
      void enQueue(int element) {
        if (isFull()) {
          cout << "Queue is full";
        } else {
          if (front == -1) front = 0;
          rear++;
          items[rear] = element;
          cout << endl
             << "Inserted " << element << endl;
        }
      }
    
      int deQueue() {
        int element;
        if (isEmpty()) {
          cout << "Queue is empty" << endl;
          return (-1);
        } else {
          element = items[front];
          if (front >= rear) {
            front = -1;
            rear = -1;
          } /* Q has only one element, so we reset the queue after deleting it. */
          else {
            front++;
          }
          cout << endl
             << "Deleted -> " << element << endl;
          return (element);
        }
      }
    
      void display() {
        /* Function to display elements of Queue */
        int i;
        if (isEmpty()) {
          cout << endl
             << "Empty Queue" << endl;
        } else {
          cout << endl
             << "Front index-> " << front;
          cout << endl
             << "Items -> ";
          for (i = front; i <= rear; i++)
            cout << items[i] << "  ";
          cout << endl
             << "Rear index-> " << rear << endl;
        }
      }
    };

int main()
{
    
   Queue q;

  //deQueue is not possible on empty queue
  q.deQueue();

  //enQueue 5 elements
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  // 6th element can't be added to because the queue is full
  q.enQueue(6);

  q.display();

  //deQueue removes element entered first i.e. 1
  q.deQueue();

  //Now we have just 4 elements
  q.display();
    return 0;
}
/* 
Queue is empty
Inserted 1
Inserted 2
Inserted 3
Inserted 4
Inserted 5
Queue is full

Front index-> 0
Items -> 
1  2  3  4  5  
Rear index-> 4
Deleted -> 1

Front index-> 1
Items -> 
2  3  4  5  
Rear index-> 4


*/ 
