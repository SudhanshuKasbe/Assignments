#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element:";
        cin>>arr[i];   
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}