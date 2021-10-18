#include<iostream>
#include<conio.h>
using namespace std;
 
main()
{
int a=1,b=1,c,n;
cout<<"enter number of fibonachi:";
cin>>n;
cout<<"\n\n"<<a<<','<<b;
for(int i=3;i<=n;i++)
{
cout<<',';
c=a+b;
cout<<c;
a=b;
b=c;
}
cout<<"\n\n\n"<<"press any key to exit...";
getch();
return 0;
}