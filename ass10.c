/*program to remove duplicates in an array*/
#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],n,j,i,k;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The given elements of array\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nThe array after removing duplicates is:\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;)
{
if(a[j]==a[i])
{
for(k=j;k<n;k++)
a[k]=a[k+1];
n--;
}
else
j++;
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
