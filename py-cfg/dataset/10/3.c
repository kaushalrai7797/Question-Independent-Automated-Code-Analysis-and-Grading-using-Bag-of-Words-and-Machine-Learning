#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char word[40][40];/*{{'C','O','D','E'},
                     {'T','R','A','P'},
                     {'A','R','C','S'},
                     {'C','A','R','T'},
                     {'R','O','A','D'},
                     {'P','A','R','T'}};*/

                     /*{{'T','G','O','H'},
                     {'S','T','A','E'},
                     {'A','R','S','A'},
                     {'R','L','I','E'},
                     {'Y','O','R','L'},
                     {'E','A','T','S'},
                     {'S','R','Y','U'},
                     {'R','A','H','U'},
                     {'L','R','O','Y'},
                     {'A','S','R','A'},
                     {'I','S','G','R'}
                     };*/
char grid[40][40]=/*{{'A','A','A','A'},
                 {'A','A','A','A'},
                 {'A','\0','\0','A'},
                 {'A','A','A','A'}
                };*/
                {{'\0','\0','\0','\0'},
                 {'\0','\0','\0','\0'},
                 {'\0','\0','\0','\0'},
                 {'\0','\0','\0','\0'}
                };

int y=0,O,xy;
int z[100];
int counter=0,n,temp=0;
char arr[90];
char check[40][40];


char lexgrid[40][40]=  {{'a','a','a','a'},
                        {'a','a','a','a'},
                        {'a','a','a','a'},
                        {'a','a','a','a'}};
int enter=0;

int main()
{
    int i,t;
  scanf("%d",&t);
  while(t--)
    {
        scanf("%d",&n);

      for(i=0;i<n;i++)
    {
        scanf("%s",&word[i]);
    }
        //display(lexgrid);
        make_grid(grid,0,0,-1,0);
        if(enter==1)
        {
            display(lexgrid);
        }
        else
        {
            printf("grid\nsnot\nposs\nible\n");
        }
        enter=0;
        restore();
    }
    return 0;
}

void restore()
{
int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            {
                lexgrid[i][j]='a';
                grid[i][j]='\0';
            }
    }

}
void make_grid(char grid1[40][40],int wayofinsert,int indexofword,int posofgrid,int ko)
{
    char grid[60][60];
    int i,j,l,p;

    prevegrid(grid1,grid);

    xy++;
     if(posofgrid>-1)
             {
                 insert(grid,wayofinsert,indexofword,posofgrid);

              }
        if(indexofword+1>=n)
        {

            lexgridfun(grid);

        }
    for(i=ko;i<n;i++)
    {
           for(l=0;l<4;l++)
          {
            for(j=1;j<=4;j++)
             {
                 p=choice(grid,l,i,j);
                 if(p!=0)
                   {
                       make_grid(grid,p,i,l,i+1);

                   }
            }
          }

        return;
    }
}
void lexgridfun(char grid[40][40])
{
    int i,j,f=-1;
    enter=1;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(grid[i][j]=='\0')
                grid[i][j]='A';
            if(grid[i][j]<lexgrid[i][j])
            {
                f=1;
                break;
            }
            else if(grid[i][j]>lexgrid[i][j])
            {
                f=0;
                break;
            }

        }
        if(f==1 || f==0)
            break;
    }

    //Store
    if(f==1)
     {
         for(i=0;i<4;i++)
      {
        for(j=0;j<4;j++)
        {
            if(grid[i][j]!='\0')
             lexgrid[i][j]=grid[i][j];
             else
             {
                 lexgrid[i][j]='A';
                 grid[i][j]='A';
             }

        }

      }
     }
}
void prevegrid(char grid1[40][40],char grid[40][40])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            grid[i][j]=grid1[i][j];
        }
    }
}

void insert(char grid[40][40],int wayofinsert,int indexofword,int posofgrid)
{
    int i;
    if(wayofinsert==1 || wayofinsert==3)
    {
        for(i=0;i<4;i++)
       {
        grid[posofgrid][i]=arr[i];
       }
    }
    else if(wayofinsert==4 || wayofinsert==2)
    {
        for(i=0;i<4;i++)
        {
        grid[i][posofgrid]=arr[i];
        }
    }
}
void display(char grid44[40][40])
{
    int i,j;

         for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++)
        {
          printf("%c",grid44[i][j]);
        }
        printf("\n");
       }
       printf("\n");

}
int choice(char grid[40][40],int i,int pos,int l)
{
    int k,t;
    //left to right
    if(l==1)
   {
    for(k=0;k<4;k++)
    {
        if(grid[i][k]!=word[pos][k] && grid[i][k]!='\0')
            break;
        arr[k]=word[pos][k];
    }
    if(k==4)
        return 1;
    else
        return 0;
   }

     //upside down
     if(l==2)
     {
     for(k=0;k<4;k++)
    {
        if(grid[k][i]!=word[pos][k] && grid[k][i]!='\0')
            break;
        arr[k]=word[pos][k];
    }
    if(k==4)
        return 2;
    else
        return 0;
     }
     //right to left
     if(l==3)
     {
         for(k=3;k>=0;k--)
    {
        if(grid[i][k]!=word[pos][3-k] && grid[i][k]!='\0')
            break;
        arr[k]=word[pos][3-k];
    }
    if(k==-1)
        return 3;
    else
        return 0;

     }
     //down to up
     if(l==4)
     {
         for(k=3;k>=0;k--)
    {
        if(grid[k][i]!=word[pos][3-k] && grid[k][i]!='\0')
            break;

        arr[k]=word[pos][3-k];
    }
    if(k==-1)
        return 4;
    else
        return 0;
     }
        return 0;
}
