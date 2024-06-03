#include<iostream>
using namespace std;
int main()
{
    /*char ch;
    cout<<"Enter the number"<<endl;
    cin>>ch;
    cout<<endl;
    //cin>>num;
    switch(ch)
    {
        case 1:     
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"How are you"<<endl;
            break;
        case 3:
            cout<<"I am good"<<endl;
            break;
        default:
            cout<<"Invalid number"<<endl;
            break;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num = 2;
    cout << endl;

    switch (num) {
        case 1:
            cout << "Hello" << endl;
            break;
        case 2:
            cout << "How are you" << endl;
            break;
        case 3:
            cout << "I am good" << endl;
            break;
        default:
            cout << "Invalid number" << endl;
            break;
    }

    cout << endl;
    return 0;
}*/
//Calculator Program using switch case
int a,b;
cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;
char op;
cout<<"Enter the operator"<<endl;
cin>>op;
switch(op)
{
    case '+':
        cout<<a+b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    default:
        cout<<"Invalid operator"<<endl;
}
}