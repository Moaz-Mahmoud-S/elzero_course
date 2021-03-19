#include <iostream>

using namespace std;

void insertion_sort (int *arr,int size)
{
    int key,i;
    for (int j=1;j<size;j++)
    {
        key=arr[j];
        i=j-1;
        while (i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
int main()
{
    int size,*arr;
    cin>>size;
    arr=new int [size];
    for (int i=0;i<size;i++)
        cin>>arr[i];
    insertion_sort(arr,size);
     for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}
