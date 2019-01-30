#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int ns=1,nv=1,t,n,i=0,len=0,f=0;
 char **arr;
 scanf("%d",&t);
 while(t--)
 {
  f=0;
  scanf("%d",&n);
  arr=(char**) malloc(n*sizeof(char *));
  for(i=0;i<n;++i)
   arr[i]=(char*) malloc(15*sizeof(char));
  for(i=0;i<n;++i)
   scanf("%s",arr[i]);
  ns=1,nv=1;
  for(i=0;i<n;++i)
  {
   len=strlen(arr[i]);
   if((arr[i][len-1]=='n')&&(arr[i][len-2]=='a')&&(arr[i][len-3]=='m'))
    ns++;
   else
   {
    nv++;
   }
   if(ns>=nv+2)
   {
    printf("superheroes\n");
    f=1;
    break;
   }
   else if(nv>=ns+3)
   {
    printf("villains\n");   
    f=1;
    break;
   }
  }
  if(f==0)
   printf("draw\n");
 }
 return 0;
}

/*
In a world of superheroes each person is either a superhero or a villain. It is well known that every superhero has a name ending with either “man” or “woman”, for example “chefman”, “prettywoman” are Superheroes. All other persons are villains, for example “hacker” and “unclejohn".
Currently a big fight between the superheroes and the villains is going to happen. Initially there is only one superhero fighting one villain. Then total of N persons joined the fight one after another. If at point of time, there are two more superheroes than villains in the fight, superheroes will win the fight immediately, as they can overwhelm villains with their powers. On the other hand, if there are 3 more villains than superheroes at any time, they will win, because they use dirty tricks to defeat the superheroes. If over all all the fights, none of these cases happen, then the fight is declared to be a draw. For a given list of people joining the fight in the given order, decide which groups wins the fight or whether the fight is ended with a draw. 
*/
