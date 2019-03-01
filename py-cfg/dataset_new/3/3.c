#include <stdio.h>

int main(void) 
{
	// your code goes here
    int n;
    scanf("%d",&n);
    int A[n+1][5];
    int i, j ,ml1 = 0, ml2 = 0, c1= 0, c2 =0;



    for(i = 1; i<n+1; i++)
    {
        for(j = 1; j< 3; j++)
        {
            scanf("%d",&A[i][j]);


        }

    }
    for(i = 1; i<n+1;i++)
    {
      if(A[i][1]>A[i][2])
      {
          A[i][3] = 1;
          A[i][4] = A[i][1]-A[i][2];

          c1 += A[i][4];
          if(A[i][4]>ml1)
          {
              ml1 = A[i][4];


          }


      }
      else
      {
          A[i][3] = 2;
          A[i][4] = A[i][2]-A[i][1];

          c2 += A[i][4];
          if(A[i][4]>ml2)
            ml2 = A[i][4];


      }




    }
    int W, L;
    if(c2>c1)
    {

         W = 2;
         L = ml2;

    }
    else
        {
         W = 1;
         L = ml1;

        }
    printf("%d %d",W , L);



	
	
	
	
	
	
	
	
	
	return 0;
}

