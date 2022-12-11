#include<iostream>
using namespace std;
void arranging_array(int a[2][3],int,int arr[]);
void dispaly_array1d(int arr[],int);
void insection_sort_array1d(int arr[],int);
void sorted_array2d(int a[2][3],int length,int arr[]);
int main()
{
    int array2d[2][3] ={{8,7,1},{5,2,3}};
    int length=sizeof(array2d)/sizeof(array2d[0][0]);
    int array1d[length];
    
    arranging_array(array2d,length,array1d);
    dispaly_array1d(array1d,length);
    insection_sort_array1d(array1d,length);
    dispaly_array1d(array1d,length);
    sorted_array2d(array2d,length,array1d);
 return 0;
}
void arranging_array(int a[2][3],int length,int arr[])
{
    int index=0;
    for(int i=0;i<length/2;i++)
    {
        for(int j=0;j<length/2;j++)
        {
            arr[index++]=a[i][j];
        }
    }
}
void dispaly_array1d(int arr[],int length)
{
    cout<<"\n1d array"<<endl;
    cout<<"-------------------"<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insection_sort_array1d(int arr[],int length)
{
    int moveiteam=0,insert=0;
    for(int i=1;i<length;i++)
    {
        moveiteam=i;
        insert=arr[i];
        
        while(moveiteam>0 && arr[moveiteam-1]>insert)
        {
            arr[moveiteam]=arr[moveiteam-1];
            --moveiteam;
        }
        arr[moveiteam]=insert;
    }
}
void sorted_array2d(int a[2][3],int length,int arr[])
{
    int index=0;
    for(int i=0;i<length/2;i++)
    {
        for(int j=0;j<length/2;j++)
        {
            a[i][j]=arr[index++];
        }
    }
    
    cout<<"\n-------------------"<<endl;
    cout<<"sorted 2d array"<<endl;
    cout<<"-------------------"<<endl;
    
    
    for(int i=0;i<length/2;i++)
    {
        for(int j=0;j<length/2;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}
