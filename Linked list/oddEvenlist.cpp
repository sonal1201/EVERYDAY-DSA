// LC-> Odd Even Linked List
// USING XTRA SPACE O(N);

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        vector<int> arr;
        ListNode *temp = head;
        while (temp->next != NULL && temp->next->next != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp)
            arr.push_back(temp->val);
        temp = head->next;
        while (temp->next != NULL && temp->next->next != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp)
            arr.push_back(temp->val);
        temp = head;
        int i = 0;
        while (temp != NULL)
        {
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};