#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			char a[100],b[100];
			cin>>a;
			cin>>b;
			if(strlen(a)<=strlen(b))
			{
				int c=0;
				for(int i=0;i<strlen(a);i++)
					{
						int h=0;
						for(int j=c;j<strlen(b);j++)
							{
								if(a[i]==b[j])
									{
										h++;
										c=j+1;
										break;
									}		
							}
						if(h==0)
							{
							cout<<"NO\n";
							break;
							}
						else if(i+1==strlen(a))
							{
								cout<<"YES\n";
								break;
							}	
					}
			}
			else 
				{
					int c=0;
				for(int i=0;i<strlen(b);i++)
					{
						int h=0;
						for(int j=c;j<strlen(a);j++)
							{
								if(b[i]==a[j])
									{
										h++;
										c=j+1;
										break;
									}		
							}
						if(h==0)
							{
							cout<<"NO\n";
							break;
							}
						else if(i==(strlen(b)-1))
							{
								cout<<"YES\n";
								break;
							}
					}
				}
			
	}
return 0;
}