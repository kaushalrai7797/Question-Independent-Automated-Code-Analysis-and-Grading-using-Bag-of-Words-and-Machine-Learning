#include<stdio.h>
int main()
{
short t;
scanf("%hd",&t);
char str[101];
while(t--)
{
scanf("%s",str);
short i=0;


while(str[i]!='\0')
{
if(str[i]=='m')
{
if(str[i-1]=='s')            // first we will check for the left side
	str[i-1]='e';        // e is for eaten 
else if(str[i+1]=='s')
	str[i+1]='e';
}
i++;
}



int counts=0,countm=0;
i=0;
while(str[i]!='\0')
{
	if(str[i]=='m')	
		countm++;
	else if(str[i]=='s')
		counts++;
i++;
}
if(counts>countm)
	printf("snakes\n");
else if(countm>counts)
	printf("mongooses\n");
else 
	printf("tie\n");
}
return 0;
}


