#include<stdio.h>
struct node
{
    int y;
    struct node *next;
};
void push_data (struct node **head, int x)
{
    struct node *temp;
    temp= malloc(sizeof(struct node));
    temp->y= x;
    temp->next = *head;
    *head= temp;
}

int pop_data(struct node **head)
{
    struct node *temp;
    temp= *head;
    int x;
    if(temp == NULL)
    {
        return -1;
    }
    else
    {
        x= temp->y;
        temp= temp->next;
        *head= temp;
        return x;
    }
}

//void display(struct node *head)
//{
//    while(head != NULL)
//    {
//        printf("%d\n",head->y);
//        head= head->next;
//    }
//}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        struct node *head=NULL;
        char p[1000002];

        scanf("%s",p);
        int g,i,j,k=0;
        g=strlen(p);

        for(i=0;i<g;i++)
        {
            if(p[i] == '<')
                push_data(&head,1);

            else if(p[i] == '>')
            {
                j= pop_data(&head);

                if(j == -1)
                    break;
                else
                   k++;
            }
        }
        printf("%d\n",2*k);
    }
    //struct node *head=NULL;

   // push_data(&head,3);
   // push_data(&head,7);
    //push_data(&head,10);
    //display(head);
    //printf("\n");
   // printf("%d\n",pop_data(&head));
   // printf("%d\n",pop_data(&head));
   // printf("%d\n",pop_data(&head));
   // printf("%d\n",pop_data(&head));
    return 0;
}
