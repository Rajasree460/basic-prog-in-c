#include<stdio.h>
void deletion(int a1[],int n);
int main()
{
int n,i;
printf("enter the value of n\n");
scanf("%d",&n);
int a[n];
printf("enter the values of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("your entered array elements are\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
deletion(a,n);
return 0;
}
void deletion(int a1[],int n)
{
 int i,location;
printf("enter the location of new element to be deleted\n");
scanf("%d",&location);
if(location>=n)
{
printf("deletion is not possible\n");
}
else
{
for(i=location;i<n;i++)
{
a1[i]=a1[i+1];
}
printf("after deletion the resultant array is\n");
for(i=0;i<n-1;i++)
{
printf("%d\n",a1[i]);
}
}
}
