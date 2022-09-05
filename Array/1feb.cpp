// #include<iostream>
// using namespace std;



// class test 
// {
//     int a,b;
//     public:
//         void input()
//         {
//             int x,y;
//             cin>>x>>y;
//             a = x;
//             b = y;
//         }
//         friend void swap(test& );
//     void di    
// };
// void swap(test &t)
// {   

// }
//Friend function taking object as an argument(Call by reference)
// #include<iostream>
// using namespace std;
// class sample
// {
//         int a,b;
//         public:
//         friend void swap(sample&);
//                 void input()
//                 {
//                     cout<<"\nEnter values of a and b";
//                     cin>>a>>b;
//                 }
//                 void display()
//                 {
//                     cout<<"\nValues of a,b after swapping are:"<<a<<" "<<b;
//                 }
// };
// void swap(sample &s)//sample &s=obj;
// {
//         int temp=s.a;
//         s.a=s.b;
//         s.b=temp;
// }
// int main()
// {
//         sample obj;
//         obj.input();
//         swap(obj);
//         obj.display();
//         return 0;

// }

// #include<iostream>
// using namespace std;



// class test 
// {
//     int a,b;
//     public:
//         friend int add(test);
//         friend int multiply(test);
//         void input()
//         {
//             int x,y;
//             cin>>x>>y;
//             a = x,b = y;
//         }
// };

// int add(test t)
// {
//     return(t.a+t.b);
// }
// int multiply(test t)
// {
//     return(t.a*t.b);
// }

// int main()
// {
//     test t1;
//     t1.input();
//     cout<<add(t1);
//     cout<<endl;
//     cout<<multiply(t1);
// }


#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int x;
    public :
     friend int largest(A,B,C);
    void input()
    {
        int a;
        cin>>a;
        x = a;        
    }
   
};
class B
{
    int y;
    public:
     friend int largest(A,B,C);
    void input()
    {
        int b;
        cin>>b;
        y = b;        
   }
   
      };
class C
{
    int z;
    public :
     friend int largest(A,B,C);
    void input()
    {
        int c;
        cin>>c;
        z = c;        
    }
   
};
int largest(A ta,B tb,C tc)
{
    
    if(ta.x>tb.y&&ta.x>tc.z) 
    {
        cout<<ta.x<<" is greator";
    }
    else if(tb.y>tc.z&&tb.y>ta.x) 
    {
        cout<<tb.y<<" is greator";
    }
    else
    {
        cout<<tc.z<<" is greator";
    }
}
int main()
{
    A testA;
    B testB;
    C testC;
    testA.input();
    testB.input();
    testC.input();
    largest(testA,testB,testC);

}
































// class test
// {
//     int a,b,c;
//     public:
//         void setdata()
//         {
//             int x,y,z;
//             cin>>x>>y>>z;
//             a = x,b = y,c = z;
//         }
//         friend int largest(test);
// };

// int largest(test d)
// // {
//     if(d.a>d.b&&d.a>d.c) 
//     {
//         cout<<d.a<<" is greator";
//     }
//     else if(d.b>d.c&&d.b>d.a) 
//     {
//         cout<<d.b<<" is greator";
//     }
//     else
//     {
//         cout<<d.c<<" is greator";
//     }

// int main()
// {
//     test a;
//     a.setdata();
//     largest(a);
// }