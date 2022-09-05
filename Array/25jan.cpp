#include<iostream>
using namespace std;

enum days_of_week{Monday=1,Tuesday, Wednesday, Thursday, Friday,Saturday,Sunday};
int main()
{
    days_of_week d1,d2,d3;
    d1 = Monday;
    d2 = Thursday;
    d3 = Saturday;
    cout<<d1<<" "<<d2<<" "<<d3<<endl;
}
