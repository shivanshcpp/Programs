#include<iostream>
using namespace std;
int main()
{
    //2D Array to 1D array using Column Major Form
    int x,y,index=0;
    cout<<"Enter rows and columns for 2D array";
    cin>>x>>y;
    //Inputting 2D array
    int arr[x][y];
    cout<<"Enter elements of 2D array:";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    int arr1d[x*y];
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            arr1d[index]=arr[j][i];
            index++;
        }
    }
    //Printing the Array
    for(int i=0;i<x*y;i++){
        cout<<arr1d[i]<<" ";
    }
    return 0;
}