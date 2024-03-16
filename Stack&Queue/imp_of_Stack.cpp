// IMPLETATION OF STACK

#include <iostream>
#include <vector>
using namespace std;

class myStack
{
    vector<int> arr;

public:
    myStack()
    {
    }
    void push(int x)
    {
        arr.push_back(x);
    }
    int pop()
    {
        if (arr.size() == 0)
            return -1;
        int ele = arr.back();
        arr.pop_back();
        return ele;
    }
    int top()
    {
        if (arr.size() == 0)
            return -1;
        int ele = arr.back();
        return ele;
    }
    bool empty()
    {
        if (arr.size() == 0)
            return true;
        else
            return false;
    }
    void clear()
    {
        while (empty() == 0)
        {
            pop();
        }
    }
};
int main()
{
    myStack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    cout << stk.top();
    stk.pop();
    cout << stk.top();
    stk.clear();
    cout << stk.pop();
    cout << stk.top();
}