#include<iostream>
using namespace std;
int main()
{
 int option;
 double value;
 double answer;
 cout<<"Enter the value: ";
 cin>>value;
 cout<<"Enter the option: "<<endl;
 cout<<"For degree to fahrenhiet choose option 1: "<<endl;
 cout<<"For degree to kelvin choose option 2: "<<endl;
 cout<<"For fahrenhiet to kelvin choose option 3: "<<endl;
 cin>>option;
 switch(option)
 {
 case 1: 
 answer = (value * (9/5)) + 32;
 cout<<answer;
break;

case 2: 
answer= value + 273.15;
cout<<answer;
break;
case 3:
answer= (value - 273.15) * (9/5) + 32;
cout<<answer;
}
}