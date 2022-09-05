// #include<iostream>

// using namespace std;
// class ABC;
// class PQR;
// class XYZ
// {
//     int x,y;
//     public:
//     void input()
//     {
//         int a,b;
//         cout<<"Enter x and y : ";
//         cin>>a>>b;
//         x = a;
//         y = b;
//     }
//     friend class ABC;
//     friend class PQR;
// };
// class ABC
// {
//     public:
//     void check(XYZ obj1)
//     {
//         if(obj1.x%5==0)
//         {
//             cout<<"It is a multiple of 5 "<<endl;
//         }
//         else
//         {
//             cout<<"It is not a multiple of 5 "<<endl;
//         }
//     }
// };
// class PQR
// {
//     public:
//     void verify(XYZ obj2)
//     {
//         if(obj2.y%7==0)
//         {
//             cout<<"It is a multiple of 7";
//         }
//         else
//         {
//             cout<<"It is not a multiple of 7";
//         }
//     }
// };
// int main()
// {
//     XYZ x;
//     ABC a;
//     PQR p;
//     x.input();
//     a.check(x);
//     p.verify(x);

// }


//Member function of one class acting act as friend function to another class
// #include <iostream>
// using namespace std;
// class B;
// class A
// {
//     public:
//     void factorial(B);
// };
// class B
// {
//     int b;
//     public:
//     void input()
//     {
//     cout<<"\nEnter the value of b:";
//     cin>>b;
//     }
//     friend void A::factorial(B); 
// };
// void A::factorial(B obj)
// {
//     int fact=1;
//     for(int i=2;i<=obj.b;i++)
//     {
//         fact*=i;
//     }
//     cout << "Factorial is = "<<fact<<endl;
// }

// int main()
// {
// A A1;
// B B1;
// B1.input();
// A1.factorial(B1);
// return 0;
// }
#include<iostream>
using namespace std;
class overloading
{
    public:
    int volume(int side)
    {
    return (side*side*side);
    }
    int volume(int length,int breadth,int height)
    {
    return (length*breadth*height);
    }
    float volume(float radius,float height)
    {
    return (3.14*radius*radius*height);
    }
};
int main()
{
overloading obj1;
int cube,cuboid;
float cylinder;
cube=obj1.volume(5);
cout<<"\n volume of cube is:"<<cube;
cuboid=obj1.volume(3,4,5);
cout<<"\n volume of cuboid is:"<<cuboid;
cylinder=obj1.volume(4.2f,5.7f);
cout<<"\n volume of cylinder is:"<<cylinder;
return 0;
}