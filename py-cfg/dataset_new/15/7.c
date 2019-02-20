#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,i,front = 1,back = 1,j;
	scanf("%d",&n);
	int chef_finger_length[n];
	int length_of_glove[n];
	for(i = 0;i < n;i++)
	scanf("%d",&chef_finger_length[i]);
	for(i = 0;i < n;i++)
	scanf("%d",&length_of_glove[i]);
	for(i = 0;i < n;i++)
	{
//	    printf("%d",chef_finger_length[i]);
//	}
	if(chef_finger_length[i] <= length_of_glove[i])
	continue;
	else
	front = 0;
	}
	for(i = 0,j = (n-1);i < n,j >=0;i++,j--)
	{
	 if(chef_finger_length[j] <= length_of_glove[i])
	continue;
	else{
     back = 0;
	}
	}
	if((front == 1)&&(back == 1))
	printf("both\n");
	else if(front == 1)
	printf("front\n");
	else if(back == 1)
	printf("back\n");
	else
	printf("none\n");
//	printf("  %d",back);
	}
	return 0;
}
