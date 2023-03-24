#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the no=";
cin>>n;
       int sum=0;
       int temp=n;
    while(n>0){
        
        int l=n%10;
        sum=sum+l*l*l;
        n=n/10;
    }
    if(temp==sum)
    cout<<"armstrong no";
    else
    cout<<"not armstrong no";
    
    return 0;
    
}