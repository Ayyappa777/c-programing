#include <stdlib.h>
int main()
{
    int num1, num2,r,i;
    printf("Enter the first number for the range: ");
    scanf("%d",&num1); 
    printf("Enter the second number for the range: ");
    scanf("%d",&num2); 
    printf("\nDisplay the even numbers between %d and %d are: ",num1,num2);
    for(i=num1; i<=num2; i++)
	{
        r=i%2;
        if(r==0)
            printf("\n %d",i);	
	}
	printf("\nDisplay the odd numbers between %d and %d are: ",num1,num2);
    for(i=num1; i<=num2; i++)
	{
        r=i%2;
        if(r==1)
            printf("\n %d",i);	
	}
}
