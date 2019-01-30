#include<stdio.h>

double ans;




int ary[100][3];


 double f_p(int n)

{

 if(!ary[n][0])

 {

  return ans;

 }

 if(ary[n][0]==1)

 {

  return 1-((1-f_p(ary[n][1]))*(1-f_p(ary[n][2])));

 }

 else

 {

  return (f_p(ary[n][1]))*(f_p(ary[n][2]));

 }

}

int main()

{

 int t,i,n;

 double p;

 for(scanf("%d",&t);t--;)

 {

  printf("\n");

  scanf("%d",&n);

  for(i=1;i<=n;++i)

  {




    scanf("%d",&ary[i][0]);

    if(ary[i][0])


      scanf("%d %d",&ary[i][1],&ary[i][2]);

  }

  p=1,ans=0;

  while((p/=10)>(.000000001))

  {

   ans+=p;



   while(f_p(n)<=.5)

   {

    ans+=p;

   }

   ans-=p;




  }

  printf("%.5lf\n",ans);

 }

 return 0;

}
