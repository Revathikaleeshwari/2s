#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=0,n,i,j;
printf("Enter the value\n");
scanf("%d",&n);
while(a!=n)
{
if(a==2)
b++;
else
{
i=n%10;
j=n/10;
if(i==2)
b++;
if(j==2)
b++;
}
a++;
printf("%d",j);
}
getch();
}
