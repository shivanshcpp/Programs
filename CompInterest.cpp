#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //Calculate Compound Interest
    int n;
    float P,R;
    float Amt;
    cout<<"Enter P,R,n";
    cin>>P>>R>>n;
    Amt=(P*(pow((1+(R/100)),n)));
    cout<<Amt;
    return 0;
}