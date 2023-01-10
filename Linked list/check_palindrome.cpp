#include<bits/stdc++.h>
using namespace std;



int main()
{
    string str;
    cin>>str;
    stack<char> st;
    for(int i=0; i<str.length(); i++)
    {
        st.push(str[i]);
    }
    bool flag = true;
    int i =0;
    while(!st.empty())
    {
        if(str[i]==st.top())
        {
            st.pop();
            i++;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}