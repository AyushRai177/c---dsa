#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   /* int a=5;
    int b=2;
    cout<<(a&b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
    int i=7;
    cout<<(i++)<<endl; //7,8
    cout<<(++i)<<endl; //9
    cout<<(i--)<<endl; //9,8
    cout<<(--i)<<endl; //7
}
int a,b=1;
a=10;
if (++a)
  cout<<b;
else
  cout<<++b;
int a=1;
int b=a++;
int c=++a;
cout<<b<<endl;
cout<<c<<endl;
}
Printing the no from 1 to n with it sum
int n;
cout<<"Enter the number"<<endl;
cin>>n;
int sum=0;
 for(int i=0;i<=n;i++)
 {
    sum=sum+i;
 }
     cout<<sum<<endl;
}

//Printing the fibonacci series of thr first 10 elements

int n;
int a=0;
int b=1;
int sum=0;
cout<<"Enter the number"<<endl;
cin>>n;
cout<<a<<b;
for(int i=1;i<=n;i++)
{
    sum=a+b;
    cout<<sum<<"";
    a=b;
    b=sum;
}}
To check whether the given no is prime or not
bool isPrime=1;
for(int i=2;i<n;i++){
    if(n%i==0){
     isPrime=0;
     break;
    }
}
    if(isPrime==0){
    cout<<"It is not a prime number";
    }
    else{
    cout<<"It is a prime"<<endl;
}}

//Use of continue statement
for(int i=0;i<n;i++)
{
    cout<<"Hello Babu mosai"<<endl;
    cout<<"Kya Kar rhi ho"<<endl;
    continue;
    cout<<"Tum kal mat aana college"<<endl;
}}

for(int i=0;i<n;i--)
{
    cout<<i<<""<<endl;
    i++;
}}
int n;
int ans=0;
int i=0;
cout<<"Enter the number"<<endl;
cin>>n;
while(n!=0)
{
    int bit=n&1;
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
}
    cout<<"Answer is"<<ans<<endl;
}
int n;
int i=0,ans=0;
cout<<"Enter the number"<<endl;
cin>>n;
while(n!=0){
int digit=n%10;
if(digit==1){
    ans=ans+pow(2,i);
}
n=n/10;
i++;
}cout<<ans<<endl;
}*/
int ans;
int n;
cout<<"Enter the nuumber"<<endl;
cin>>n;
for(int i=0;i<30;i++)
{
    int ans=pow(2,i)
    if(ans==n){
        return true;
    }
      else{
        return false;
    }
}
}

