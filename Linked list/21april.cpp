// #include<iostream>
// using namespace std;
// void Test1(int x)
// {
//     try
//     {
//         if(x%3==0)
//         throw x;
//         else
//         cout<<"\nNo exception is thrown";
//     }
//     catch(int y)
//     {
//     cout<<"\nException caught in function";
//     throw;
//     }
// }
// int main()
// {
//     cout<<"\nInside main";
//     try
//     {
//         Test1(4);
//         Test1(15);
//     }
//     catch(int x)
//     {
//         if(x%5==0)
//         {
//             cout<<"\nException caught in main()";
//             cout<<"\nProblem";
//         }
//     else 
//     {
//         cout<<"\nOk";
//     }
//     }
//     cout<<"\nEnd of main";
//     return 0;

#include<iostream>
using namespace std;

class test
{
    public:
    int x;
    void getdata()
    {
        cout<<"Enter the value of x"<<endl;
        cin>>x;
    }
};
 void check(test t1)
    {
        if(t1.x%2==0)
        {
            throw t1;
        }
        else
        {
            cout<<"No exception thrown"<<endl;
        }
    }
int main()
{
    try
    {
        test t1;
        t1.getdata();
        check(t1);
    }
    catch(test t1)
    {
        cout<<"Exception thrown for data "<<t1.x<<endl;
    }
}