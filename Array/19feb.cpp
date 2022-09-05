// #include<bits/stdc++.h>

// using namespace std;

// class test
// {
//     int data[5];
//     int key;
//     public:
//     void input()
//     {
//         cout<<"Enter the size of array"<<endl;
//         for(int i = 0; i <5;i++)
//         {
//             cout<<"Enter the element at index "<<i<<endl;
//             cin>>data[i];
//         }
//         cout<<"Enter the value of key : "<<endl;
//         cin>>key;    
//     }
//     int binary()
//     {
//         int start = 0;
//         int end = 4;
//         while(start <= end)
//         {
//             int mid = start+(end-start)/2;
//             if(data[mid]==key)
//             {
//                 return(mid);
//             }
//             else if(data[mid]>key)
//             {
//                 end = mid-1;
//             }
//             else
//             {
//                 start = mid+1;
//             }
//         }
//         return(-1);
//     }
// };
// int main()
// {
//     test obj[2];
//     for(int i = 0; i < 2; i++)
//     {
//         cout<<"Enter the values for array "<<i<<endl;
//         obj[i].input();
//     }
//     if(obj[0].binary()!=-1)
//         cout<<"For array 1 Element found at index "<<obj[0].binary()<<endl;
//     if(obj[1].binary()!=-1)
//         cout<<"for array 2 element found at index "<<obj[1].binary();
// }
#include<bits/stdc++.h>

using namespace std;


class test
{
    int data[5];
    public:
    void input()
    {
        cout<<"Enter the size of array"<<endl;
        for(int i = 0; i <5;i++)
        {
            cout<<"Enter the element at index "<<i<<endl;
            cin>>data[i];
        }   
    }
    void display(){
        for(int i = 0; i <5;i++)
        {
            cout<<"The element at index "<<i<<"is "<<data[i]<<endl;
        }
    }
    void bubble()
    {
        for(int i =0;i<4;i++)
        {
            for(int j =0;j<4-i;j++)
            {
                if(data[j]>data[j+1])
                {
                    int temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
    }
};

int main()
{
    test obj[2];
    for(int i = 0; i < 2; i++)
    {
        cout<<"Enter the values for array "<<i<<endl;
        obj[i].input();
    }
    cout<<"Before sorting : "<<endl;
    for(int i = 0; i < 2; i++) {
        cout<<"for array "<<i<<endl;
        obj[i].display();
    }
    obj[0].bubble();
    obj[1].bubble();
    cout<<"After sorting : "<<endl;
    for(int i = 0; i < 2; i++) {
        cout<<"for array "<<i<<endl;
        obj[i].display();
    }

}













