// #include<bits/stdc++.h>
// using namespace std;


// class A
// {
//     int arr[2][2];
//     public:
//     void input()
//     {
//         for(int i=0; i<2; i++)
//         {
//             for(int j=0; j<2; j++)
//             {
//                 cout<<"Enter the element at index ["<<i<<"] "<<"["<<j<<"]"<<endl;
//                 cin>>arr[i][j];
//             }
//         }
//     }
//     void display()
//     {
//         for(int i=0; i<2; i++)
//         {
//             for(int j=0; j<2; j++)
//             {
//                 cout<<"Element at index ["<<i<<"] "<<"["<<j<<"]"<<" is "<<arr[i][j]<<endl;
//             }
//         }
//     }
// };
// int main()
// {
//     A obj;
//     obj.input();
//     obj.display();
// }

#include <iostream>
using namespace std;

class test
{
    int arr1[3][3];
    int arr2[3][3];
    int res[3][3];
    public:
    void input()
    {
        cout << endl << "Enter elements of 1st matrix: " << endl;
       
        for(int i = 0; i < 3; ++i)
        { 
            for(int j = 0; j < 3;j++)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> arr1[i][j];
            }
        }
        cout << endl << "Enter elements of 2nd matrix: " << endl;
        for(int i = 0; i < 3; ++i)
        { 
            for(int j = 0; j < 3;j++)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> arr2[i][j];
            }
        }
    }
    void sum()
    {
        for(int i = 0; i < 3;i++)
        {   
    
            for(int j = 0; j < 3; ++j)
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    void display()
    {
        cout<<"Sum matrix is : ";
        for(int i = 0; i < 3; i++)
        {
            cout<<endl;
            for(int j = 0; j < 3; j++)
            {
                cout<<res[i][j]<<"\t";
            }
        }
    }
};
int main()
{
    test obj;
    obj.input();
    obj.sum();
    obj.display();
}
