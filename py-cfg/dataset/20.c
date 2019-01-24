#include<stdio.h>
int main() {
int test,i,j;
scanf("%d",&test);
 for(i=0;i<test;i++) {
    int number_of_steps,threshold,counter=0;
    scanf("%d %d",&number_of_steps,&threshold);
    int height[number_of_steps];
    for(j=0;j<number_of_steps;j++)
        scanf("%d",&height[j]);

    if(height[0] > threshold) {

        if(height[0] % threshold ==0)
            counter= counter + (height[0]/threshold) - 1;

        else
            counter= counter + (height[0]/threshold);
    }
    for(j=0;j<number_of_steps-1;j++)
    {
        if(height[j+1] - height[j] > threshold)
        {
            if((height[j+1] - height[j]) % threshold == 0)
                counter=counter + ((height[j+1] - height[j])/threshold) -1;
            else
                counter=counter + ((height[j+1] - height[j])/threshold);
        }

    }
    printf("%d\n",counter);
 }

return 0;
}
