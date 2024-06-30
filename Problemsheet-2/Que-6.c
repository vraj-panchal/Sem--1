#include<stdio.h>
int main()
{
    int i,n,count;

    printf("Enter Your Digits ");
    scanf("%f",&n);

    do
    {
        n=n/10;
        count++;
    } while (n!=0);
    

    printf("%d",count);
    return 0;
}