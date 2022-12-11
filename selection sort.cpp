#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,1,3,9,0,2,4,5,8,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min;
    
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        
        swap(arr[i],arr[min]);
    }
    
    for(int i=0;i<size;i++)
        cout<<arr[i]<<endl;
    
    

    return 0;
}
   