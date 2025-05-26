#include<iostream>
#include<math.h>
using namespace std;
int digitcount(int n)
{ 
  int count=0;
  while(n>0)
  {
    count++;
    n=n/10;
  }
  return count;
}
int armstrongnum(int n,int count)
{
  int sum=0,rem;
  while(n>0)
  {
     rem=n%10;
     n=n/10;
     sum=sum+pow(rem,count);
     
  }
  return sum;
}
int main()
{ start:
  int n,count,ans;
  cout<<"Enter a Number Here : ";
  cin>>n;
  count=digitcount(n);
  ans=armstrongnum(n,count);
  if(ans==n)
  {
    cout<<"Armstrong Number."<<endl;
  }
  else{
    cout<<"Not a Armstrong Number."<<endl;
  }
  
  goto start;
  return 0;
}