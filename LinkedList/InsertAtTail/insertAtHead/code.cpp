
// insert at tail
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // pointer add
    // creating a node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data); // ready newNode

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

//cretae a insert a head
void insertAtHead(Node *&head, int data){
    Node *newNode = new Node(data); 

    newNode->next = head;

    head = newNode;
}

// to print


void display(Node *&head)
{
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
int main()
{

    Node *head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);

    // display(head);

    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    display(head);

    // to print head
    insertAtHead(head, 3000);
    insertAtHead(head, 2000);
    insertAtHead(head, 1000);
    display(head);
}