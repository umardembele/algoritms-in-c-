#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,1,3,9,0,2,4,5,8,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);   //i used swap here instead of the code you showed us in class.
            }
        }
    }
    for(int k=0;k<size;k++)
    {
        cout<<"arr["<<k<<"] ="<<arr[k]<<endl;
    }
    
    
    
    return 0;
}
   