// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {
//     string s = "helloworld";
//     for(int i=0; i<s.length(); i++)
//     {
//         cout<<s[i]<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;

class A
{
    string s;
    public:
    void input()
    {
        cout<<"Enter the string : "<<endl;
        cin>>s;
    }
    int task()
    {
        int count = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a')
            {
                count++;
            }
        }
        return(count);
    }
};
int main()
{
    A obj1 ;
    obj1.input();
    cout<<endl<<obj1.task();

}