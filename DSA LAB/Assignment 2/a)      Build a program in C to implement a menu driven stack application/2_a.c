#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\n ENTER THE SIZE OF STACK[MAX=100] : ");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n ENTER THE CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t PLEASE ENTER A VALID CHOICE(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK IS OVER FLOW");
        
    }
    else
    {
        printf(" ENTER A VALUE TO BE PUSHED : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t STACK IS UNDER FLOW");
    }
    else
    {
        printf("\n\t THE POPPED ELEMENTS IS %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n THE ELEMENTS IN STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n PRESS THE NEXT CHOICE");
    }
    else
    {
        printf("\n THE STACK IS EMPTY");
    }
   
}
