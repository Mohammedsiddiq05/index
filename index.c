#include<stdio.h>
int main()
{
int a,i;
printf("\nenter the value:");
scanf("%d",&a);
char a[10];
for(i=0;i<a;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<a;i++)
{
printf("\n%d%d",a[i],i);
}
return 0;
}
