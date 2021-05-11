#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void leftrotate(int arr[],int d,int n)
{
    if(d==0)
    return ;
    
    d=d%n;
    
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void print(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftrotate(arr,d,n);
    print(arr,n);
    return 0;
}
