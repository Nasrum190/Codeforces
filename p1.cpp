#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5 ,sum, y=9;
    int *ptrx,*ptry;
    ptrx=&x;
    ptry= &y;
    sum= *ptrx + *ptry;
    printf("sum=%d  ",sum);
    getch();
}
