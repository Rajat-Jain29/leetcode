class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        N = k;
        A.resize(N, -1);
        head = 0, tail = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()) {
            return false;
        }
        A[tail] = value;
        tail = modulo(tail + 1);
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        A[head] = -1;
        head = modulo(head + 1);
        return true;
    }
    
    int Front() {
        if(isEmpty()) {
            return -1;
        }
        return A[head];
    }
    
    int Rear() {
        if(isEmpty()) {
            return -1;
        }
        return A[modulo(tail - 1)];
    }
    
    bool isEmpty() {
        return (head == tail && A[tail] == -1);
    }
    
    bool isFull() {
        return (head == tail && A[tail] != -1);
    }
private:
    int N;
    vector<int>A;
    int head;
    int tail;
    int modulo (int x) {
        if (x < 0) {
            x += N;
        } else if (x >= N) {
            x -= N;
        }
        return x;
    }
};