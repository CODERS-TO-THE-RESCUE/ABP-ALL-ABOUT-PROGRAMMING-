#include <bits/stdc++.h>
using namespace std;
  bool hasrray(int arr[],int n,int sum)
  {
      int l,r;
      sort(arr,arr+n);
      l=0;
      r=n-1;
      while(l!=r)
      {
          if(arr[l]+arr[r]==sum)
          return true;
          if(arr[l]+arr[r]<sum)
          l++;
          else
          r--;
      }
      return false;
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
     int sum;
     cin>>sum;
     if(hasrray(arr,n,sum))
     cout<<"Found";
     else
     cout<<"Not found";

      return 0;
 }
