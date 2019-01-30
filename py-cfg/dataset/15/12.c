#include<stdio.h>
#include<stdlib.h>

struct node
{
  int type;
  int input[2];
};

struct node *nod;
double p=0.0;

double probcalc(int i)
{
  if(nod[i].type==0)
    return p;
  else if(nod[i].type==1)
    return (1-probcalc(nod[i].input[0]))*(1-probcalc(nod[i].input[1]));
  else if(nod[i].type==2)
    return probcalc(nod[i].input[0])*probcalc(nod[i].input[1]);
}

void circuit()
{
  int n,i=0;
  scanf("%d",&n);
  nod=(struct node*)calloc(n+1,sizeof(struct node));
  for(i=1;i<=n;i++)
    {
      scanf("%d",&nod[i].type);
      if(nod[i].type!=0)
        {
          scanf("%d",&nod[i].input[0]);
          scanf("%d",&nod[i].input[1]);
        }
    }
  for(;;)
    {
      float d=probcalc(n);
      p+=0.001*(d-0.5);
      if(d==0.5)
        break;
    }
  printf("%.5f\n",p);
  free(nod);
}

int main(void)
{
  int T;
  scanf("%d",&T);
  for(;T>0;T--)
    circuit();
  return 0;
}
