#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    cout<<"The position is:"<<endl;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==key)
    {
       return i;
    }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
     cout<<"Which you want to find value"<<endl;
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}