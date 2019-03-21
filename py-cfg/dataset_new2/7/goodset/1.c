#include<stdio.h>
int func(int wall[], int y, int start, int end)

{
    int d=0;
    if(start + 1 < end)
    {


        int one_count=0;
        int d=0,d_left,d_right,p,q;

        int i,soldier,direction=0;

        for(i=0;i<y;i++)
        {
            if(wall[i]==0)
                break;
            else
                one_count++;
        }
        if(one_count==y)
            return 0;

        else
        {
            soldier= (start + end )/2;
           // printf("start: %d  end: %d  soldier: %d d: %d\n",start,end,soldier,d);
            //direction=0;
            p= distance(wall,y+2,start,end,soldier);
           // printf("%d\n",p);
           // end=soldier;
            d= d + p + func(wall,y+2,start,soldier) + func(wall,y+2,soldier,end);
          //  printf("%d\n",d);
            return d;
           // q= distance(wall,n+2,start,end,soldier);
            //d_right= d_right + p + ;

        }
       // d=d_left + d_right;

    }
    return d;

}
int distance(int wall[], int y,int start, int end,int soldier)
{

   if(start >= end || (soldier==start) || soldier== end)
    return 0;

   else
   {
       *(wall + soldier) =1;
       return (end - start);
   }
}
void print_func(int wall[], int y)
{
    int i;
    for(i=0;i<y;i++)
    {
        printf("%d ",wall[i]);
    }
    printf("\n");
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        int i,j,one_count=0;
        int x,y,z;
        int wall[n+2];
        int flag=0;
        int max_distance= n + (n*(n+1)/2);
        for(i=0;i<n+2;i++)
        {
            wall[i]=0;
        }
        wall[0]=1;
        wall[n+1]=1;

        x=0;
        y=n+1;
        //z= x+y/2;
        int min_distance=0;
       // while(flag ==0)
        //{

            min_distance= func(wall,n+2,x,y);
        //}
        //if(flag==1)
         if(m < min_distance )
            printf("-1\n");
         else if (m >= min_distance && m <= max_distance)
         {
            printf("0\n");
         }
         else if(m > max_distance)
         {
             printf("%d\n", m - max_distance );
         }
        // printf("min_distance: %d  max_distance= %d\n", min_distance, max_distance);
         //  printf("min_distance: %d\n",min_distance);

    }
    return 0;
}
