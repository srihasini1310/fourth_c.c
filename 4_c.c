#include <stdio.h> //read the standard input and output library

int main()
{
    int n1,n2;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    if((n1+n2)%2==0)
    {
        printf("%d is even",n1);
        printf("\n%d is even",n2);
    }
    else if(n1%2==0&&n2%2!=0)
    {
        printf("%d is even",n1);
        printf("\n%d is odd",n2);
    }
    else if(n1%2!=0&&n2%2==0)
    {
        printf("%d is odd",n1);
        printf("\n%d is even",n2);
    }
    else
    {
        printf("%d is odd",n1);
        printf("\n%d is odd",n2);
    }
    return 0;
}