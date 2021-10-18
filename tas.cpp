#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    a = rand() % 6 + 1
    for (int i = 1; i<= 5; i++ )
    {
     cout << a <<"\t";
     if (a == 6)
        cout<< a <<;
     if ( i % 5 == 0 )
        cout << endl;
    }
   return 0;
}