// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;
// int main()
// {
//     char name[10];
//     float sal;
//     ofstream outFile("K21PP.txt");//Opening file for writing
//     if(!outFile)
//     {
//     cout<<"\n File could not be opened";
//     exit(1);
//     }
//     for(int i=0;i<3;i++)
//     {
//     cout<<"\n Enter the name and salary of Employee"<<i+1<<" : ";
//     cin>>name>>sal;
//     outFile<<"\n"<<name<<"\t"<<sal;
//     }
//     outFile.close();
//     ifstream inpFile("K21PP.txt");//Opening file for reading
//     if(!inpFile)
//     {
//     cout<<"\n File could not be opened";
//     exit(1);
//     }
//     for(int i=0;i<3;i++)
//     {
//     inpFile>>name;
//     inpFile>>sal;
//     cout<<"\n Employee"<<i+1<<" : ";
//     cout<<name<<"\t"<<sal;
//     }
//     inpFile.close();
//}
// Open member functions
// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;
// int main()
// {
// char name[10];
// float sal;
// ofstream outFile;
// outFile.open("newfile.txt");
// if(!outFile)
// {
// cout<<"\n File could not be opened";
// exit(1);
// }
// for(int i=0;i<3;i++)
// {
// cout<<"\n Enter the name and salary of Employee"<<i+1<<" : ";
// cin>>name>>sal;
// outFile<<"\n"<<name<<"\t"<<sal;
// }
// outFile.close();
// ifstream inpFile;
// inpFile.open("newfile.txt");
// if(!inpFile)
// {
// cout<<"\n File could not be opened";
// exit(1);
// }
// for(int i=0;i<3;i++)
// {
// inpFile>>name;
// inpFile>>sal;
// cout<<"\n Employee"<<i+1<<" : ";
// cout<<name<<"\t"<<sal;
// }
// inpFile.close();
// }


// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;
// int main()
// {
//    fstream FILE1,FILE2;
//    char ch;
//    FILE1.open("sourceappend.txt",ios::in);
//    FILE2.open("appendfile.txt",ios::app);
//    if(!FILE1||!FILE2)
//    {
//    cout<<"\n File could not be opened";
//    exit(1);
//    }
//       ch = FILE1.get();
//       while (ch != EOF)
//        {
//          FILE2.put(ch);
//          ch=FILE1.get();
//        }
//       cout<<"File is merged with the content of another file";
//       FILE1.close();
//       FILE2.close();
//       return 0;
// }

//Detecting end of the file
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
ofstream outFile;
outFile.open("Questions.txt");
outFile<<"\n What is C language?";
outFile<<"\n What is C++ language?";
outFile.close();
outFile.open("Answers.txt");
outFile<<"\n Structured language";
outFile<<"\n Object Oriented language";
outFile.close();
char quest[80],ans[80];
ifstream inpFile;
inpFile.open("Questions.txt");
cout<<"\n********Sample Questions for Quiz Contest********";
while(inpFile.eof()==0)//First way-Using eof()[Returns 0 until unless end of file is not reached]
{
inpFile.getline(quest,80);
cout<<"\n"<<quest;
}
inpFile.close();
inpFile.open("Answers.txt");
cout<<"\n\n*******Answers for Sample Question********";
while(inpFile)//Second way-Using object name
{
inpFile.getline(ans,80);
cout<<"\n"<<ans;
}
inpFile.close();
}
