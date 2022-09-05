#include<iostream>
#include<vector>
using namespace std;


// struct MyStack
// {
//     int *arr;
//     int cap;
//     int top;
//     MyStack(int c)
//     {
//         cap = c;
//         arr = new int[cap];
//         top = -1;
//     }
//     void push(int x)
//     {
//         top++;
//         arr[top] = x;
//     }
//     int pop()
//     {
//         int res = arr[top];
//         top--;
//         return(res);
//     }
//     int peek()
//     {
//         return(arr[top]);
//     }
//     int size()
//     {
//         return(top+1);
//     }
//     bool isempty()
//     {
//         return(top == -1);
//     }
// };

struct MyStack
{
    vector<int> v;
    void push(int x) {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return(res);
    }
    int size()
    {
        return(v.size());
    }
    bool isempty()
    {
        return(v.empty());
    }
    int peek()
    {
        return(v.back());
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    return 0;

}