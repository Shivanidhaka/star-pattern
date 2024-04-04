#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("enter the number of lines");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1-i;j++)
{
printf("* ");
}
printf("\n");
}
getch();
}
