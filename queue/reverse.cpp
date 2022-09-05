#include<bits/stdc++.h>
using namespace std;
//Iterative code
// void reverse(queue<int> &q1)
// {
//     stack<int> s;
//     while(q1.empty()==false)
//     {
//         s.push(q1.front());
//         q1.pop();
//     }
//     while(s.empty()==false)
//     {
//         q1.push(s.top());
//         s.pop();
//     }
// }
// Recurssive Code

void reverse(queue<int>& q) 
{ 
	if(q.empty())
	   return;
	   
	int x = q.front();
	 q.pop();
	   
   reverse(q);
   q.push(x);
} 
int main()
{ 
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    reverse(q1);
    while(q1.empty()==false)
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
}