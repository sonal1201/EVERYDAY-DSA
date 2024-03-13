// ADD TWO NUMBER
// DUMMY NODE AP....

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(-1); // THIS IS NEW NODE WHICH WE WILL RETURN
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *curr = dummy; // this will travse the dummy node
        int curry = 0;
        while (temp1 != NULL || temp2 != NULL)
        { // this will run until both temp1 and temp2 not equal to null
            int sum = curry;
            if (temp1)
                sum += temp1->val;
            if (temp2)
                sum += temp2->val;
            ListNode *NewNode = new ListNode(sum % 10);
            curry = sum / 10;

            curr->next = NewNode;
            curr = curr->next;

            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }
        if (curry)
        { // if curry have some value except 0 then this will handle it
            ListNode *newNode = new ListNode(curry);
            curr->next = newNode;
        }
        return dummy->next;
    }
};