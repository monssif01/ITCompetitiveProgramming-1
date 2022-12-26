#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,i,c,ok=1;
    cout<<"give the number n";
    cin>>n;
    for(i=2;i<n;i++){
                     if(n%i==0){
                       ok=0;break;         
                     }
                     }
                     if(ok==0){cout<<"the number is not prime";}
                     else {cout<<"the number is prime";}
getch();
}
