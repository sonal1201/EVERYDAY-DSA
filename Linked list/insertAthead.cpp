#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node insertAthead(Node *&head, int data)
{
    // step-1
    Node *newNode = new Node(data);
    // step-2
    newNode->next = head;
    // step-3
    head = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    insertAthead(head, 20);
    insertAthead(head, 30);
    insertAthead(head, 40);
    insertAthead(head, 50);

    print(head);
}