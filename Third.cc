#include<iostream>
using namespace std;
int main()
{
    /*char ch;
    cout<<"Enter a char"<<endl;
    cin>>ch;
    cin>>a;
    int m,n;
    cout<<"Enter the value of m"<<endl;
    cin>>m;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cin>>n;
    cout<< "value of n is:" << n <<endl;
}
if(m>n){
    cout<< "m is greater than n"<<endl;
}
else
{
    cout<< "m is less than n"<<endl;
}
if(a>0)
{
    cout<<"A is positive"<<endl;

}
else if(a<0)
{
    cout<<"A is negative"<<endl;
}
else{
    cout<<"A is 0"<<endl;
}
}*/
/*if(a>20){
    cout<<"Love";
}
else if(a==24)
{
    cout<<"Lovely";
}
else{
    cout<<"Babbar";
}
}
if(ch>='a' && ch<='z' ){
    cout<<"This is Lower case"<<endl;}
else if(ch>='A' && ch<='Z'){
    cout<<"This is upper case"<<endl;
}
else if(ch>='0' && ch<='9'){
    cout<<"It is a numeric"<<endl;
}
}*/
// Print the no from 1 to n
/*int n;
cout<<"Enter a number"<<endl;
cin>>n;
int i=1;
while(i<=n)
{
    cout<<i<<endl;
    i=i+1;
}
}*/

// sum 1 to n //find sum of all even number
/*int n;
int sum=0;
int i=2;
cout<<"Enter a number"<<endl;
cin>>n;
while(i<=n)
{
    if(i%2==0){
    cout<<i<<endl;
    sum=sum+i;
    }  
i=i+1;
}

cout<<"value of sum is "<<sum<<endl;
}*/
//Check A given number is prime or not
int n;
cout<<"Enter a number";
cin>>n;
int i=2;
while(i<n)
{
    if(n%i==0){
        cout<<"not a prime"<<i<<endl;
    }
else
{
    cout<<"It is a prime"<<i<<endl;
    }
    i=i+1;
}

}




