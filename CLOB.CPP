#include<iostream>
#include<string.h>
#define SIZE 10
using namespace std;
struct Student
{
string name;
int status;
};

int main()
{
    Student arr[SIZE];
    int pass=0,temp;
    string name;
    for(int i=0;i<SIZE;i++)
        {
            cout<<"enter name:"<<endl;
            cin>>name;
            cout<<"enter status(1 for pass 2 for fail):"<<endl;
            cin>>temp;
            arr[i].name=name;
            arr[i].status=temp;
            if (temp ==1)
                pass++;
        }
    for(int i=0;i<SIZE;i++)
        {
            cout<<"name="<<arr[i].name<<" "<<endl;
            if (arr[i].status==1)
                cout<<"PASS"<<endl;
            else
                cout<<"FAIL"<<endl;
        }
    if(pass>8)
        cout<<"Raise Tution";
    return 0;
    
}
