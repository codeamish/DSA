// #include<iostream>
// using namespace std;


// template<class t>
// t area(t num1,t num2)
// { 
//     return(num1*num2);
// }



// int main()
// {
//     int a = 8,b = 9;
//     cout<<"Area is "<<area<int>(a,b)<<endl;
//     float c=8.654,d = 5.234;
//     cout<<"Area is "<<area<float>(c,d)<<endl;
//     double e =123.231,f =23.321;
//     cout<<"Area is "<<area<double>(e,f)<<endl;
//     }
#include<iostream>
using namespace std;


template<class t>
t largest(t num1,t num2)
{ 
    if(num1>=num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int a = 12,b = 9;
    cout<<"Largest is "<<largest<int>(a,b)<<endl;
    char c = 'A',d = 'a';
    cout<<"Largest is "<<largest<char>(c,d)<<endl;
}