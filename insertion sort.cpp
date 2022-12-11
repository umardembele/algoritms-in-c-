#include<iostream>
using namespace std;
int main()
{
    int array[]={8,9,7,2,4,5,7};
    int size =sizeof(array)/sizeof(array[0]);
    
    for(int i=1;i<size;i++)
    {
        int moveitem=i;
        int insert=array[i];
        
    while(moveitem>0 && array[moveitem-1]>insert)
    {
        array[moveitem]=array[moveitem-1];
        --moveitem;
    }
        array[moveitem]=insert;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<"array["<<i<<"]="<<array[i]<<endl;
    }
    
        
    return 0;
}