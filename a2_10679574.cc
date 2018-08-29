#include <iostream>
using namespace std;
int main ()
{
int number;
int i;
int k;
    cout<<"Enter any positive number"<<endl;
    cin>>number;
for(i = 1;i <= number; i++)
 {
if((number % i) ==0)
    {
      k++;
    }
 }
if(k == 2)
  cout<<number<<"is a prime number"<<endl;
else
  cout<<number<<"is not a prime number"<<endl;
 
return 0;
}
