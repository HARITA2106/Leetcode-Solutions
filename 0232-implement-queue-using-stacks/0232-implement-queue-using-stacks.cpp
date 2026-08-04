#include <stack>
using namespace std;

class MyQueue {
    stack<int> a, b;
public:
    void push(int x) { a.push(x); }

    int peek() {
        if (b.empty())
            while (!a.empty())
                b.push(a.top()), a.pop();
        return b.top();
    }

    int pop() {
        int x = peek();
        b.pop();
        return x;
    }

    bool empty() {
        return a.empty() && b.empty();
    }
};