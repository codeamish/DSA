// #include<iostream>
// using namespace std;
// template<class T>
// void swap1(T &a,T &b)
// {
// T temp=a;
// a=b;
// b=temp;
// }
// int main()
// {
// int inum1=4,inum2=5;
// float fnum1=4.8,fnum2=5.3;
// char c1='A',c2='a';
// cout<<"\n Before swapping:";
// cout<<"\n inum1="<<inum1<<" and inum2="<<inum2;
// cout<<"\n fnum1="<<fnum1<<" and fnum2="<<fnum2;
// cout<<"\n c1= "<<c1<<" and c2="<<c2;
// swap1<int>(inum1,inum2);
// swap1<float>(fnum1,fnum2);
// swap1<char>(c1,c2);
// cout<<"\n\n After Swapping:";
// cout<<"\n inum1="<<inum1<<" and inum2="<<inum2;
// cout<<"\n fnum1="<<fnum1<<" and fnum2="<<fnum2;
// cout<<"\n c1= "<<c1<<" and c2="<<c2;
// return 0;
// }
// ----------------------------------------
// //Function template with more than one generic types
// #include<iostream>
// using namespace std;
// template<class T1,class T2>
// void multiply(T1 num1,T2 num2)
// {
// cout<<num1*num2;
// }
// int main()
// {
// int num1=3;
// float num2=4.5;
// cout<<"\n Product of num1*num2=";
// multiply<int,float>(num1,num2);
// cout<<endl;
// multiply<int,int>(2,2);
// float num3=7.8;
// int num4=3;
// cout<<"\n Product of num3*num4=";
// multiply<float,int>(num3,num4);
// cout<<endl;
// multiply<float,float>(2.3,4.5);
// return 0;
// }
// --------------------------------------
// #include<iostream>
// using namespace std;
// template<class T1,class T2,class T3>
// void sum(T1 num1,T2 num2,T3 num3)
// {
// cout<<num1+num2+num3;
// }
// int main()
// {
// int num1=3;
// float num2=4.5f;
// double num3=4.25;
// cout<<"\n Sum of num1+num2+num3=";
// sum<int,float,double>(num1,num2,num3);
// cout<<endl;
// sum<int,int,int>(2,2,9);
// double num5=7.8;
// double num4=39.89;
// double num6=78.78;
// cout<<"\nsum of num5*num4=";
// sum<double,double,double>(num5,num4,num6);
// cout<<endl;
// return 0;
// }




// #include<iostream>
// using namespace std;
// template<class T>
// void display(T x) //Function template with one generic type
// {
//         cout<<"Template display:"<<x<<"\n";
// }
// template<class T1,class T2,class T3>
// void display(T1 x,T2 y,T3 z) //Function template with three generic types
// {
//         cout<<"Template display:"<<x<<" "<<y<<" "<<z<<"\n";
// }
// void display(int x)//Non-template function accepting one integer argument
// {
//         cout<<"Explicit display:"<<x<<"\n";
// }
// void display(char y)//Non-template function accepting one character argument
// {
//         cout<<"Explicit display:"<<y<<"\n";
// }
// int main()
// {
// display(100); //Calls display(non-template) which accepts one integer argument
// display(56.78);//Calls display(template) accepting one generic type
// display('a');// Calls display(non-template) which accepts one character argument
// display(5.98,'b',89);// Calls display(template) accepting three generic types
// return 0;
// }
// ------------------------------------
// #include<iostream>
// using namespace std;
// template <class T>
// class abc
// {
// T a,b;
// public:
// abc(T x,T y)
// {
// a=x;
// b=y;
// }
// T sum()
// {
//     return(a+b);
// }
// };
// int main()
// {
// abc<int> obj(10,20);
// cout<<"\nmax value is "<<obj.max1();
// abc<float>obj1(10.2f,34.7f);
// cout<<"\nmax value is "<<obj1.max1();
// abc<char>obj2('A','a');
// cout<<"\nmax value is "<<obj2.max1();
// }

//Class template with more than one generic types
#include<iostream>
using namespace std;
template<class T1, class T2>
class Test
{
T1  a;
T2  b;
public:
Test(T1  x, T2  y)
    {   
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" and "<<b<<"\n";
    }
};
int main()
{
    Test <int ,float> test1(12,12.3f);
    Test <double  ,int> test2(20.423, 12);
    Test<float,float> test3(23.541,12.42);
    test1.show();
    test2.show();
    test3.show();
    return 0;
}


