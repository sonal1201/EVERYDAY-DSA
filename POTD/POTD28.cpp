// 641. Design Circular Deque

class MyCircularDeque
{
public:
    int K;
    vector<int> deq;
    int front;
    int rear;
    int currCnt;

    MyCircularDeque(int k)
    {
        K = k;
        deq = vector<int>(K, 0);
        front = 0;
        rear = K - 1;
        currCnt = 0;
    }

    bool insertFront(int value)
    {
        if (isFull())
        {
            return false;
        }
        front = (front - 1 + K) % K;
        deq[front] = value;
        currCnt++;

        return true;
    }

    bool insertLast(int value)
    {
        if (isFull())
        {
            return false;
        }
        rear = (rear + 1) % K;
        deq[rear] = value;
        currCnt++;

        return true;
    }

    bool deleteFront()
    {
        if (isEmpty())
        {
            return false;
        }
        front = (front + 1) % K;
        currCnt--;
        return true;
    }

    bool deleteLast()
    {
        if (isEmpty())
        {
            return false;
        }
        rear = (rear - 1 + K) % K;
        currCnt--;
        return true;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return deq[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return deq[rear];
    }

    bool isEmpty()
    {
        if (currCnt == 0)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (currCnt == K)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */