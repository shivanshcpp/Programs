#include<iostream>
using namespace std;

int main()
{   
    //Linear Search Program
    int n,ele,flag=0;
    cout<<"Enter Size of array";
    cin>>n;
    cout<<"Enter element to be Searched";
    cin>>ele;
    int arr[n];
    //Inputting an Array
    cout<<"Enter elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Performing Linear Search
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<"Element "<<ele<<" Found at index "<<i;
            flag=1;
            break;
        }
    }
    if(flag==0){
            cout<<"Element Not Found!!";
        }
    return 0;
}