#include<stdio.h>


int main()
{	int n,i,j,k,t;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
	 	int count=0;
  		scanf("%d",&n);
 
 		char a[2][n+1];
 		scanf("%s",a[0]);
 		scanf("%s",a[1]);
 		
		 for(i=0;i<2;i++)
 			for(j=0;j<n;j++)
 			{
  				if(a[i][j]=='#')
  				count++;
 			}
 		
 
 		for(i=0;i<n;i++)
 		{ 	j=0;
  			if(a[j][i]=='#')
  			break;
  			j=1;
  			if(a[j][i]=='#')
  			break; 
		}
 
 		
 			int nci1,nci2,dci1,dci2;
		 	nci1=dci2=j;
		 	dci1=nci2=1-j;
  			int c=0;
			int l=i;
  			
			for(i;i<n;i++)
 			{	if(a[nci1][i]=='#')
  				c++;
  				else
  				break;
  
  				if(a[dci1][i]=='#')
  				{	c++;
   					nci1=1-nci1;
   					dci1=1-dci1;
  				}
  
 			}
 			
 			if(a[0][l]=='#' && a[1][l]=='#' && c!=count)
 			
			{   c=0;
				for(l;l<n;l++)
 				{	if(a[nci2][l]=='#')
  					c++;
  					else
  					break;
  
  					if(a[dci2][l]=='#')
  					{	c++;
   						nci2=1-nci2;
   						dci2=1-dci2;
  					}
  
 				}
 			}
 
 			
			if(c==count)
 			printf("yes\n");
 			else printf("no\n");
		
	}
 return 0;
}