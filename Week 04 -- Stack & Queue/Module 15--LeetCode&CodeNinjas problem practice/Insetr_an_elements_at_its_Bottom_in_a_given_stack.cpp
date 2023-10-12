#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack <int>myStack2;
    while (!myStack.empty())
    {
        myStack2.push(myStack.top());
        myStack.pop();
    }
    myStack2.push(x);
    while (!myStack2.empty())
    {
        cout <<myStack2.top()<<" ";
        myStack2.pop();
    }
    return myStack;
}