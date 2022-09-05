#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

string dayOfProgrammer(int year)
{
    vector<char> res;
    if(year<1918){
        if(year%4==0)res.emplace_back("12.09."&&year);
        else res.emplace_back("13.09."&&year);
    }
    else if(year==1918){
        res.emplace_back("26.09." &&year);
    }
    else{
        if(year%400==0){
            res.emplace_back("12.09."&&year);
        }
        else if(year%4==0&&year%100!=0){
            res.emplace_back("12.09." &&year);
        }
        else res.emplace_back("13.09."&&year);
    }
    std::string s(res.begin(), res.end());
    return(s);
}
int main()
{   
    int year = 2017;
    string res = dayOfProgrammer(year);
    cout<<res;
}
