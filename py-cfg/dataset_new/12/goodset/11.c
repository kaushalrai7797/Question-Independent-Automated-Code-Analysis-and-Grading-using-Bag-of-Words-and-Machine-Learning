#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,f,i,j=0;
	scanf("%d",&t);
	while(t--)
	{ scanf("%d",&n);
	  int a[n];
	  for(i=0;i<n;i++)
	  {
	      scanf("%d",&a[i]);
	  }
	  scanf("%d",&f);
	  int b[f];
	  for(j=0;j<f;j++)
	  { scanf("%d",&b[j]);
	  }
	  j=0;
	  for(i=0;i<n;i++)
	  { if(a[i]==b[j])
	    {   j++; }
	  }
	  if(j==f)
	  printf("Yes\n");
	  else
	  printf("No\n");
	}
	return 0;
}

