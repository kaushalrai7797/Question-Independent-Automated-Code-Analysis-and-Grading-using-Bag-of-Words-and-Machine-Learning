#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin >> t;
	while(t--)
	{
	    string m,w;
	    int c=0,k=0;
	    cin >> m >> w;
	    for(int i=0;i<m.length();i++)
	    {
	        for(int j=k;j<w.length();j++)
	        {
	            if(m[i]==w[j])
	            {
	                k=j+1;
	                c++;
	                break;
	            }
	        }
	        if(c==m.length())
	            break;
	    }
	    if(c==m.length())
	    {
	        cout << "YES" <<endl;
	        continue;
	        
	    }
	    else
	    {
	        
	        c=0,k=0;
	        for(int i=0;i<w.length();i++)
	        {
	            for(int j=k;j<m.length();j++)
	            {
	                if(w[i]==m[j])
	                {
	                    k=j+1;
	                    c++;
	                    break;
	                }
	            }
	            if(c==m.length())
	                break;
	        }
	        if(c==w.length())
	            cout << "YES" <<endl;
	        else
	            cout << "NO" <<endl;
	    }
	}
	return 0;
}