#include<stdio.h>
//ALGO: Fixing head at a # and then tracing other #s for body formation of Snake (i.e. Movement Tracing)
//Vertical movement is given priority over horizontal, thus we need to move only (up->down), (down->up) & (left->right)
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        getchar();	//To eat up newline
        char a[2][n];
        int headi,headj,i,iprev,j,jprev,bcnt,btotal=0,valid=0,headUpdate=0;
        //bcnt = Black(#) count ; btotal = Black(#) total ; valid, headUpdate are flag variables
        
        for(i=0;i<2;i++)	//Taking Input--------------------------------
        {
		   	for(j=0;j<n;j++)
            {
                a[i][j]=getchar();
                if(a[i][j]=='#')
                btotal++;	//Count no. of #s
            }
            getchar();	//To eat up newline
    	}
    	//----------------------------------------------------------------
    	
    	if(btotal)	//If there exists atleast 1 #
    	{
    		headi=0,headj=0;	//Set head at (0,0)
	        while(1)	//Loop for each different positions of head
	        {
	            while(a[headi][headj]!='#' || headUpdate)	//Update Head of Snake until it comes at a #
	            {
	                if(headi==0)
	                    headi++;
	                else
	                {
	                    headi--;
	                    headj++;
	                }
	                headUpdate=0;	//Disabling flag so that further updation occurs a/c to loop entry control logic
	            }
	            if(headj>=n)	//If head crosses n on shifting itself to right
	            	break;
	            
	            i=headi,j=headj,bcnt=1,iprev=headi,jprev=-1;
	            //printf("\nhead: i=%d j=%d\n",headi,headj);	//To trace Head co-ordinates (headi,headj)
	            while(1)
	            {
	                //printf("i=%d j=%d bcnt=%d\n",i,j,bcnt);	//To trace co-ordinates (i,j) of movement of line joining #s (or Snake body formation)
	                if(i==0 && a[i+1][j]=='#' && (i==iprev && j!=jprev))	//Up to down movement
	                {	
						iprev=i;
						jprev=j;
					    i++;
					    bcnt++;
					}
	                else if(i==1 && a[i-1][j]=='#' && (i==iprev && j!=jprev))	//Down to up movement
	                {	
						iprev=i;
						jprev=j;
					    i--;
					    bcnt++;
					}
	                else if(j<n-1 && a[i][j+1]=='#')	//Left to right movement
	                {	
	                	iprev=i;
						jprev=j;
					    j++;
					    bcnt++;
					}
	                else	//No # found to move further
	                    break;
	            }
	            if(bcnt==btotal)	//#s covered equals to total no. of #s
	            {
	                valid=1;
	                break;
	            }
	            headUpdate=1;	//To ensure one time entry in head updating loop
	        }
	    }
        if(valid)	//Checking 'valid' flag to print output
    	    printf("yes\n");
        else
        	printf("no\n");
    }
    return 0;
}