#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a=1,b=1,c,i;
    for(i=0;i<100;i++){ 
                  c=a+b;
                  cout<<a<<'+'<<b<<'='<<c<<endl;
                  a=b;
                  b=c;
                  }  
                  getch();           
}
