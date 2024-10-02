#include<iostream>
#include<string.h>
using namespace std;
const int size=4;
struct student{
char name[15];
int age;
float lingth;
};
void add_student(student s[])
{
for(int i=0;i<size-1;i++){
cout<<"enter name student "<<i+1<<endl;
cin>>s[i].name;
cout<<"enter age student "<<i+1<<endl;
cin>>s[i].age;
cout<<"enter lingth student "<<i+1<<endl;
cin>>s[i].lingth;
}
}
void print(student *s){
s[size-1].age=0;
s[size-1].lingth=0;
for(int i=0;i< size-1;i++){
strncat(s[size-1].name,s[i].name,1);
s[size-1].age+=s[i].age;
s[size-1].lingth+=(s[i].lingth/3);
switch(i){
case 0:
cout<<s[i].name<<"  ";
break;
case 1:
cout<<s[i].age<<"  ";
break;
case 2:
cout<<s[i].lingth<<endl;
break;}}
}
int main()
{
    student s1[size];
    add_student(s1);
    print(s1);
    return 0;
}