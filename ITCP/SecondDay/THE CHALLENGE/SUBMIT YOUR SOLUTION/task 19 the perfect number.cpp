#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,i,s;
    cout<<"give the number n";
    cin>>n;
    s=0;
    for(i=1;i<n;i++){
                     if(n%i==0){
                        s=s+i;  
                     }
                     }
                     if(s==n){cout<<"the given number is a perfect number";}
                     else {cout<<"the given number is not a perfect number";}
                     
getch();
}
