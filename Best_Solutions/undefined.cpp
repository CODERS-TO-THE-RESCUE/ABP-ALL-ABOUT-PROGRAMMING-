#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l = s.length();
	    string x="";
	    string y="";
	    if(l%2==0)
	    {
	        for(int i =0;i<l/2;i++)
	        {
	            x+=s[i];
	        }
	        for(int j = l/2;j<l;j++)
	        {
	            y+=s[j];
	        }
	        sort(x.begin(),x.end());
	        sort(y.begin(),y.end());
	        if(x==y)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    else
	    {
	       for(int i=0;i<l/2;i++)
	       {
	           x+=s[i];
	       }
	       for(int j = (l/2)+1;j<l;j++)
	       {
	           y+=s[j];
	       }
	       sort(x.begin(),x.end());
	       sort(y.begin(),y.end());
	       if(x==y)
	       {
	           cout<<"YES"<<endl;
	       }
	       else
	       {
	           cout<<"NO"<<endl;
	       }
	    }
	    
	}
	return 0;
}
