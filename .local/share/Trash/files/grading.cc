#include <iostream>
using namespace std;
int main ()
{
 int score;
 char grade;
cout<<"Enter your score"<<endl;
cin>>score;
if(score >= 80 && score <= 100)
{
  cout<<1<<endl;
}
else
{
 cout<<2<<endl;
}
switch (grade)
{
case 1:
cout<<"Grade A"<<endl;
break;
case 2:
cout<<"Grade F"<<endl;
break;
default:;
cout<<" No Grade"<<endl;
}
return 0;
}
