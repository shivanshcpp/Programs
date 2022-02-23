#include<iostream>
using namespace std;

int checkprime(int n){
    int x=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            x=1;
            break;
        }
    }
    if(x==1){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{   
    int x;
    cout<<"Enter a no:";
    cin>>x;
    cout<<checkprime(x);
    return 0;
}
