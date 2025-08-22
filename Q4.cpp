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
        int mid=size/2;
            for(int i=0;i<mid;i++)
            {
                int temp=arr[i];
                arr[i]=arr[size-1-i];
                arr[size-1-i]=temp;
            }
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
    