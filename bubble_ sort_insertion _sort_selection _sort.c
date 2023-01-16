#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int n);
void insertion_sort(int a[],int n);
void selection_sort(int a[],int n);
void display(int a[],int n);
int main()
{
int n,i,ch;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter the values of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("your entered array is\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
while(ch!=5)
{
printf("**main menu**\n");
printf("1.bubble sort\n2.insertion sort\n3.selection sort\n4.display 
array\n5.exit\n");
printf("enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:bubble_sort(a,n);
break;
case 2:insertion_sort(a,n);
break;
case 3:selection_sort(a,n);
break;
case 4:display(a,n);
break;
case 5:exit(0);
default:
printf("invalid ch\n");
}
}
}
void bubble_sort(int a[],int n)
{
int i,j,temp; //sorting using 3rd variable
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("array sorted\n");
/*
without using 3rd variable
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
}
*/
}
void insertion_sort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++) 
 {
 j=i-1;
 while(j>=0 && a[j]>a[i]) 
 {
 temp=a[j];
 a[j]=a[i];
 a[i]=temp;
 j--;
 }
 }
 printf("array sorted\n");
}
void selection_sort(int a[],int n)
{
int i,j,temp,min;
min=a[0];
for(j=i+1;j<n;j++)
{
for(i=1;i<n;i++)
{
if(a[i]<=min)
{
min=a[i];
}
}
for(i=0;i<n;i++)
{
if(a[i]!=min)
{
temp=a[i];
a[i]=min;
min=temp;
}
}
}
printf("array sorted\n");
}
void display(int a[],int n)
{
printf("Sorted list in ascending order:\n");
 for (int i=0;i<n;i++) 
 {
 printf("%d\n",a[i]);
 }
}
