#include <stdio.h>
int unique_elements(int arr[], int len) {

    int counted[len], j, n, count, flag;

    counted[0] = arr[0];

    count = 1;/*one element is counted*/

        for(j=0; j <= len-1; ++j) {
        flag = 1;;
        /*the counted array will always have 'count' elements*/
        for(n=0; n < count; ++n) {
            if(arr[j] == counted[n]) {
                flag = 0;
            }
        }
        if(flag == 1) {
            ++count;
            counted[count-1] = arr[j];
        }
    }
    return count;
}
int main(void) {
	 int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    int i,n,a[10000]={0},cnt=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            cnt++;
        }
        else
        {
            continue;
        }
    }
    m=unique_elements(a,n);
    cnt=cnt+m;
    printf("%d\n",cnt);
    }
	return 0;
}

