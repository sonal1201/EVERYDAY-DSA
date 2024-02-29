// REVESE DOUBLY LINKED LIST

#include <iostream>
#include <vector>
#include <stack>
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *creationDLL(vector<int> arr)
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
// BRUTE FORCE...
Node *reverse(Node *head)
{
    Node *temp = head;
    stack<int> st;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *head = creationDLL(arr);
    head = reverse(head);
    print(head);
}