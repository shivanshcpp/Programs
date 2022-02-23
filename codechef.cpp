#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    for(int i=2;i<3;i++){
        for(int j=2;j<=i;j++){
            if(i*j==3){
                a=i;
                b=j;
                break;
            }
        }
        
    }
    cout<<a<<b;

    return 0;
}