// DELETION OF HEAD.

#include <iostream>
#include <vector>
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

Node *creationLL(vector<int> &arr) // CREATION OF LL
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node *head) // PRINTING THE LL.
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *removeHeadLL(Node *&head) // REMOVING THE HEAD OF LL
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *removeTailLL(Node *&head) // REMOVING THE TAIL OF LL
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return temp;
    }
    int cnt = 0;
    Node *prev = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (k == cnt)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {32, 6, 21, 66, 44};
    Node *head = creationLL(arr);
    cout << "Real Linked List" << endl;
    print(head);
    head = removeHeadLL(head);
    cout << endl;
    cout << "After Removing head" << endl;
    print(head);
    head = removeTailLL(head);
    cout << endl;
    cout << "After Removing tail" << endl;
    print(head);
    cout << endl;
    cout << "After removing k Element" << endl;
    head = removeK(head, 2);
    print(head);
}