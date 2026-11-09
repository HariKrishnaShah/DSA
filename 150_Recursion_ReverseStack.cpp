
#include <iostream>
#include <stack>
using namespace std;

// Insert an element at the bottom of the stack
void insertAtBottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(topElement);
}

// Reverse the stack using recursion
void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int x = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, x);
}

int main()
{
    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(1);
    s.push(4);

    reverseStack(s);

    // Display the reversed stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}
