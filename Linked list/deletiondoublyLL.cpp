#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};
Node *creationDL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
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
// DELETION OF HEAD IN DOUBLY LL
Node *deletionHead(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    head->prev = NULL;
    prev->next = NULL;

    free(prev);
    return head;
}
// DELETION OF TAIL IN DOUBLY LL
Node *deletionTail(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->prev;
    prev->next = NULL;
    tail->prev = NULL;
    free(tail);
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = creationDL(arr);
    print(head);
    head = deletionHead(head);
    cout << endl;
    print(head);
    head = deletionTail(head);
    cout << endl;
    print(head);
}