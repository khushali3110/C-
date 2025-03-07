#include <iostream>
using namespace std;

// Define the Node class
class Node
{
public:
    int data;   // Stores the data of the node
    Node *next; // Pointer to the next node

    // Constructor to initialize a new node
    Node(int data)
    {
        this->data = data; // Set the data for the node
        this->next = NULL; // Initialize next to NULL as it is the last node initially
    }
};

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data); // Create a new node with the given data

    // If the linked list is empty (head is NULL), make newNode the head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next; // Move to the next node
    }

    // Attach the new node to the last node
    temp->next = newNode;
}

void insertAtHead(Node *&head, int data)
{
    // Create a new node with the provided data
    Node *newNode = new Node(data);

    // Point the new node to the current head of the list
    newNode->next = head;

    // Make the new node the head of the list
    head = newNode;
}

int insertAtPosition(Node *&head, int position, int data)
{

    Node *newNode = new Node(data);

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return 0;
    }

    Node *temp = head;

    for (int i = 1; i < position - 1; i++)
    {

        temp = temp->next;

        if (temp == NULL)
        {
            cout << "Position out of bound!" << endl;
            return -1;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display the entire linked list
void display(Node *&head)
{
    // If the list is empty, print an appropriate message
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    // Traverse the list and print each node's data
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print current node's data
        temp = temp->next;          // Move to the next node
    }

    // End of the list, print NULL
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL; // Initialize an empty linked list

    // Insert nodes at the tail of the list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    // Display the entire linked list
    display(head);

    insertAtPosition(head, 1, 1000);
    insertAtPosition(head, 3, 3000);
    display(head);
    insertAtPosition(head, 10, 101010);

    return 0;
}
