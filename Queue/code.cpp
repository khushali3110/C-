// using stl
// #include<iostream>
//  #include<queue>
//  using namespace std;
 
//  int main(){
//      queue<int> myqueue;
 
//      myqueue.push(10);
//      myqueue.push(20);
 
//      myqueue.push(30);
//      myqueue.push(40);
 
//      myqueue.push(50);
//      myqueue.push(60);
 
//      cout << "Front element in queue : " << myqueue.front() << endl;
 
//      cout << "Rear element in queue : " << myqueue.back() << endl;
 
//      myqueue.pop();
 
//      cout << "Front element in queue : " << myqueue.front() << endl;
 
//      cout << "Size of queue : " << myqueue.size() << endl;
 
//      cout << "Queue is empty or not : " << (myqueue.empty() ? "Yes" : "NO" )<< endl;
 
//      while(!myqueue.empty()){
//          cout << myqueue.front() << " ";
//          myqueue.pop();
//      }
 
//      cout << endl;
 
//      cout << "Size of queue : " << myqueue.size() << endl;
//  }




// using array
// #include <iostream>
//  using namespace std;
 
//  // Queue class definition
//  class Queue
//  {
//  public:
//      int *arr;     // Array to store elements of the queue
//      int front;    // Points to the front element of the queue
//      int back;     // Points to the last element in the queue
//      int capacity; // Maximum capacity of the queue
 
//      // Constructor to initialize the queue with a given size
//      Queue(int size)
//      {
//          arr = new int[size]; // Dynamically allocate memory for the queue array
//          front = -1;          // Initialize front to -1, indicating empty queue
//          back = -1;           // Initialize back to -1, indicating empty queue
//          capacity = size;     // Set the capacity of the queue
//      }
 
//      // Enqueue operation: Add an element to the queue
//      void push(int data)
//      {
//          // Check for overflow condition (queue is full)
//          if (back == capacity - 1)
//          {
//              cout << "Queue overflow!" << endl;
//              return;
//          }
 
//          // Increment back and add the new element to the queue
//          back++;
//          arr[back] = data;
//          cout << data << " enqueued in queue!" << endl;
 
//          // If the queue is empty (front is -1), set front to 0
//          if (front == -1)
//          {
//              front++;
//          }
//      }
 
//      // Dequeue operation: Remove an element from the front of the queue
//      int pop()
//      {
//          // Check for underflow condition (queue is empty)
//          if (front == -1 || front > back)
//          {
//              cout << "Queue underflow!" << endl;
//              return -1; // Return -1 to indicate the queue is empty
//          }
 
//          // Store the front element and increment front
//          int popped_Value = arr[front];
//          front++;
 
//          cout << popped_Value << " dequeued from queue!" << endl;
//          return popped_Value;
//      }
 
//      // Display operation: Show the current elements in the queue
//      void display()
//      {
//          // Check if the queue is empty
//          if (front == -1 || front > back)
//          {
//              cout << "Queue is empty!" << endl;
//              return;
//          }
 
//          // Print elements from front to back
//          for (int i = front; i <= back; i++)
//          {
//              cout << arr[i] << " ";
//          }
 
//          cout << endl;
//      }
 
//      // Peek operation: Get the front element of the queue without removing it
//      int peek()
//      {
//          // Check if the queue is empty
//          if (front == -1 || front > back)
//          {
//              cout << "Element not present in Queue!" << endl;
//              return -1; // Return -1 to indicate no element in the queue
//          }
 
//          return arr[front]; // Return the front element of the queue
//      }
 
//      // Empty operation: Check if the queue is empty
//      bool empty()
//      {
//          return (front == -1 || front > back); // Returns true if queue is empty
//      }
//  };
 
//  int main()
//  {
//      Queue q1(5); // Create a queue with a capacity of 5 elements
 
//      // Display initial empty queue
//      q1.display();
 
//      cout << "Enqueue Operation: " << endl;
 
//      // Enqueue some elements
//      q1.push(10);
//      q1.push(20);
//      q1.push(30);
//      q1.push(40);
//      q1.push(50);
 
//      // Display the queue after enqueuing elements
//      q1.display();
 
//      cout << "Dequeue Operation: " << endl;
 
//      // Dequeue an element
//      q1.pop();
 
//      cout << "Display Operation: " << endl;
 
//      // Display the queue after one dequeue
//      q1.display();
 
//      // Peek the front element of the queue
//      cout << "Peek element in queue: " << q1.peek() << endl;
 
//      // Check if the queue is empty
//      cout << "Queue is empty: " << (q1.empty() ? "Yes" : "No") << endl;
 
//      return 0;
//  }



// using linked list
// #include <iostream>
//  using namespace std;
 
//  // Node class to represent a single node in the linked list
//  class Node
//  {
//  public:
//      int data;   // Data of the node
//      Node *next; // Pointer to the next node in the list
 
//      // Constructor to initialize a node with data
//      Node(int data)
//      {
//          this->data = data;
//          this->next = NULL; // Initialize next pointer to NULL
//      }
//  };
 
 // Queue class using linked list
//  class Queue
//  {
//  public:
//      Node *front; // Points to the front (first) element of the queue
//      Node *back;  // Points to the back (last) element of the queue
 
//      // Constructor to initialize an empty queue
//      Queue()
//      {
//          front = NULL; // No elements in the queue initially
//          back = NULL;  // No elements in the queue initially
//      }
 
//      // Enqueue operation: Adds an element to the back of the queue
//      void push(int data)
//      {
//          Node *newNode = new Node(data); // Create a new node
 
//          if (front == NULL)
//          {                    // If the queue is empty
//              front = newNode; // Both front and back point to the new node
//              back = newNode;
//              return;
//          }
 
//          back->next = newNode; // Link the current back node to the new node
//          back = newNode;       // Move the back pointer to the new node
//      }
 
//      // Dequeue operation: Removes the element from the front of the queue
//      void pop()
//      {
//          if (front == NULL)
//          { // If the queue is empty
//              cout << "Queue underflow!" << endl;
//              return;
//          }
 
//          Node *frontDelete = front; // Store the node to be deleted
//          front = front->next;       // Move the front pointer to the next node
 
//          delete frontDelete; // Delete the old front node
//      }
 
//      // Peek operation: Returns the front element without removing it
//      int peek()
//      {
//          if (front == NULL)
//          { // If the queue is empty
//              cout << "Queue Empty!" << endl;
//              return -1; // Return -1 as an indication of an empty queue
//          }
//          return front->data; // Return the data at the front of the queue
//      }
 
//      // Empty operation: Checks if the queue is empty
//      bool empty()
//      {
//          return (front == NULL); // Return true if the queue is empty
//      }
 
//      // Display operation: Prints all elements in the queue from front to back
//      void display()
//      {
//          if (front == NULL)
//          { // If the queue is empty
//              cout << "Queue is empty!" << endl;
//              return;
//          }
 
//          Node *temp = front; // Temporary pointer to traverse the queue
//          while (temp != NULL)
//          {                                 // Traverse the entire queue
//              cout << temp->data << " -> "; // Print each element
//              temp = temp->next;            // Move to the next node
//          }
//          cout << "NULL" << endl; // Indicate the end of the queue
//      }
//  };
 
//  // Main function to demonstrate the queue operations
//  int main()
//  {
//      Queue q1; // Create a queue object
 
//      // Enqueue some elements into the queue
//      q1.push(10);
//      q1.push(20);
//      q1.push(30);
//      q1.push(40);
//      q1.push(50);
 
//      cout << "Queue elements: ";
//      q1.display(); // Display the queue
 
//      // Dequeue one element from the front of the queue
//      q1.pop();
//      cout << "Queue elements after one pop: ";
//      q1.display(); // Display the queue after dequeue
 
//      return 0;
//  }



// using class
#include <iostream>
#include <queue>
using namespace std;
 
 class Queue
 {
 public:
     queue<int> myqueue;
 
     void push(int data)
     {
         myqueue.push(data);
     }
 
     int pop()
     {
 
         if (myqueue.size() == 0)
         {
             cout << "queue is Underflow!" << endl;
             return -1;
         }
 
     }
 
     void display()
     {
 
         if (myqueue.size() == 0)
         {
             cout << "queue is Empty!" << endl;
         }
 
         while (myqueue.size() > 0)
         {
             cout << myqueue.front() << " ";
             myqueue.pop();
         }
     }
 };
 
 int main()
 {
    Queue q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     q.push(60);
     q.push(70);
 
     q.pop();
 
     q.display();
 }
