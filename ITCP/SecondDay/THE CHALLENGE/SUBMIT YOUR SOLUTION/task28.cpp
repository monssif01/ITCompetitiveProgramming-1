#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,n,i;
    cout<<"tap a number of ints";
    cin>>n;
    cout<<"tap the variable a";
    cin>>a;
    cout<<"tap the variable b";
    cin>>b;
    for(i=1;i<n+1;i++)
                   {
                    cout<<i;
                    if(i%a==0){cout<<"it";}
                    if(i%b==0){cout<<"ccc";}
                    cout<<endl;
                    }
    getch();
}
