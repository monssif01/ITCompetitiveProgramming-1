#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,t[3],i,ok=1;
    t[0]=2;
    t[1]=3;
    t[2]=5;
    cout<<"give the number n";
    cin>>n;
    for(i=0;i<3;i++){
                 if(t[i]*2==n||t[i]*3==n||t[i]*5==n){ok=0;break;
                                                     }
                 else {ok=2;break;;}
                 }
                 if(ok==0){cout<<"ugly";}
                 if(ok==2){cout<<"not ugly";} 
                 getch();
                 }
