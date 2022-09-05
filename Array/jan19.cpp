#include<iostream>
using namespace std;



// class simin
// {
//     private:
//         double pi,time,rate;
//     public:
//         void set_data(float a,float b,float c)
//         {
//             pi = a;
//             rate = b;
//             time = c;
//         }
//         void get_data()
//         {
            
//             cout<<"Enter the principal amount, rate and time : "<<endl;
//             cin>>pi>>time>>rate;
//         }
//         float si()
//         {
//             float res = (pi*rate*time)/100;
//             return(res);
//         }
// };

// int main()
// {
//     simin s1,s2,s3;
//     s1.set_data(2000,10,1);
//     float res1 = s1.si();
//     cout<<res1<<endl;
//     s2.set_data(54000,5,5);
//     cout<<s2.si()<<endl;
//     s3.get_data();
//     cout<<s3.si()<<endl;

// }
// //Array of objects
// #include <iostream>
// using namespace std;
// class simple_interest
// {
// float principle,rate,time;
// public:
// void get_input()
// {
// cout<<"\nEnter principle,rate and time:";
// cin>>principle>>rate>>time;
// }
// float calculate()
// {
// return (principle*rate*time)/100.0f;
// }
// };
// int main()
// {
// simple_interest obj[3];
// for(int i=0;i<3;i++)
// {
// obj[i].get_input();
// cout<<obj[i].calculate();
// }
// return 0;
// }
   //Array of objects
#include <iostream>
using namespace std;
class employee
{
    public:
    char name[100];
    int id,salary;
    void get_input();
    void display();
    
};
void employee::get_input()
{
    cout<<"\nEnter name,id and salary:";
    cin>>name>>id>>salary;
}
void employee::display()
{
    cout<<"Name is:"<<name<<" Id is:"<<id<<" Salary is:"<<salary;
}
int main()
{
    employee obj[4];
    int max,index;
    for(int i=0;i<4;i++)
    {
        obj[i].get_input();
        obj[i].display();
    }
    max=obj[0].salary;
    index=0;
    for(int i=1;i<4;i++)
    {
        if(obj[i].salary>max)
        {
            max=obj[i].salary;
            index=i;
        }
    }
    cout<<"\n Employee id with maximum salary is:"<<obj[index].id<<"and salary amount is:"<<max;
    return 0;
}

