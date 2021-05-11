#include <bits/stdc++.h>
using namespace std;
  int binarysearch(int arr[],int low,int high,int key)
  {
      while(low <= high)
      {
          int mid=(low+high)/2;
          if(arr[mid]==key)
          return mid;
          if(arr[mid]>key)
          return binarysearch(arr,low,mid-1,key);
          if(arr[mid]<key)
          return binarysearch(arr,mid+1,high,key);
      }
      return -1;
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
     int key;
     cin>>key;
     int result=binarysearch(arr,0,n-1,key);
     (result == -1) ? cout<<"Not found" : cout<<"found at index"<<" "<<result;
      return 0;
 }
