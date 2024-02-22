// LENGTH OF LINKED LIST

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
Node *converArrLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]); // head bano
    Node *mover = head;            // naya mover bano..
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]); // temp bano
        mover->next = temp;            // mover ka next kp temp se jodo
        mover = temp;                  // mover ko aage badho
    }
    return head;
}

// Finding length  function;
int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {2, 4, 6, 78, 10, 20, 30};
    Node *head = converArrLL(arr);

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    // length calling function
    cout << endl
         << lengthOfLL(head);
}
