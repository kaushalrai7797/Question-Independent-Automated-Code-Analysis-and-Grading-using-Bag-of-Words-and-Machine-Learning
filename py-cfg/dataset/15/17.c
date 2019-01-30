#include<stdio.h>










int main()

{

 int t,i,n,j;

 double p,v[100],h=1.0,l=0.0,m=.5;





 int ary[100][3];

 for(scanf("%d",&t);t--;)

 {  
     
     printf("\n");

  j=0;




  scanf("%d",&n);

  for(i=1;i<=n;++i)

  {

   scanf("%d",&ary[i][0]);

   if(ary[i][0])

   {

    scanf("%d %d",&ary[i][1],&ary[i][2]);

   }

  }

  i=40;

  while(i--)

  {

   while(++j<=n)

   {


    if(!ary[j][0])

    {

     v[j]=m;

    }

     else

      if(ary[j][0]==1)

    {

     v[j]=1-(1-v[ary[j][1]])*(1-v[ary[j][2]]);

    }

    else

    {

     v[j]=v[ary[j][1]]*v[ary[j][2]];

    }

   }

   if(v[n]==.5)

   {

    break;

   }

   else

    if(v[n]<.5)

   {

    l=m,m=(l+h)/2;

   }

   else

   {

    h=m,m=(l+h)/2;

   }

    j=0;



  }

  printf("%.5lf\n",m);

 }

 return 0;







}
