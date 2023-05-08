#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The Sorted element is :"<<endl;
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<endl;
    }
}