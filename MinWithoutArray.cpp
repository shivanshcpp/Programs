#include<iostream>
using namespace std;

int main()
{
    int x,ele,min=INT8_MAX;
    cout<<"Enter no of elements in the list:";
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>ele;
        if(ele<min){
            min=ele;
        }

    }
    cout<<"Minimum value is:"<<min;
    return 0;
}