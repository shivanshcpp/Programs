#include<iostream>
using namespace std;

int main()
{
    int n,x=1,r,count=0,y;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        x*=n;
        n--;
    }
    y=x;
    while(x!=0){
        r=x%10;
        if(r==0){
            count++;
            x/=10;
        }
        else{
            x=0;
        }
    }
    
    cout<<y<<" "<<count;
    
    return 0;
}