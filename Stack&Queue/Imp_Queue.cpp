// Queue IMPLEMENTION//

class MyQueue
{
public:
    vector<int> arr;
    int front = 0;
    // MyQueue() {
    //     front=0;
    // }

    void push(int x)
    {
        arr.push_back(x);
    }

    int pop()
    {
        int frontele = arr[front];
        front += 1;
        return frontele;
    }

    int peek()
    {
        return arr[front];
    }

    bool empty()
    {
        return front == arr.size();
    }
};
