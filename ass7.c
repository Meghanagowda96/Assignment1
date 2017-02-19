/*progam to sort the elements of an array*/
#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],n,temp,i,j;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The original array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nThe sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
