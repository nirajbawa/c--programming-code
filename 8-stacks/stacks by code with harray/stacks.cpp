#include <iostream>
#include <stdlib.h>
using namespace std;



class stack{
    private:
        
        int size;
        int *arr;
    public:
        int top;
        stack(int usize)
        {
            size = usize;
            top = -1;
            arr = (int *)malloc(usize*sizeof(int));
        }
        int isEmpty()
        {
            if(top==-1) 
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        int isFull()
        {
            if(top==size-1)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        int push(int element)
        {
            if(isFull())
            {
                cout << "\nstack is full\n";
            }
            else{
                top++;
                arr[top] = element;
                cout << "\nelement = " << element << " is pushed\n"; 
            }
        }
        int pop()
        {
            if(isEmpty())
            {
                cout << "\nstack is empty\n";
            }
            else{
                top--;
                cout << "\nelement is poped\n";
            }
        }
        int view()
        {
            cout << endl;
            cout << "\narray is :\n\n";
            for(int i = 0; i<=top; i++)
                cout << " " << arr[i] << " ";
        }
        int peek(int element)
        {
            int findInd = top - element + 1;
            if(findInd < 0)
            {
                cout << "invalid postition";
                return -1;
            }
            else{
                return arr[findInd];
            }
        }
};

int main()
{
    stack s1(5);
    s1.pop();

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);

    s1.view();

    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();

    cout << endl << "\nelement peek : " << endl << endl;
    for(int i = 1; i<= s1.top+1; i++)
    {
        cout << "the element on " << i << " : " << s1.peek(i) << endl;
    }

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

    s1.view();

    return 0;
}