#include <bits/stdc++.h>
using namespace std;
  void rearrange(int arr[],int n)
  {
      int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            
                swap(arr[i], arr[j]);
            j++;
        }
    }
  }
   void printarray(int arr[],int n)
   {
       for(int i=0;i<n;i++)
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
     rearrange(arr,n);
     printarray(arr,n);
      return 0;
 }