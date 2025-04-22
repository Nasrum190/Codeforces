
#include<stdio.h>
int display(int a,int b)
{
     return a+b;
}
int main()
{
    int num1,num2;
    printf("please enter your numbers=");
    scanf("%d %d",&num1,&num2);
    int sum=display(num1,num2);
    printf("sum is=%d",sum);
}
