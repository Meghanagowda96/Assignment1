/*program to find nth smallest element*/
#include<stdio.h>
#define MAX 100
int a[MAX],m,n,i,j;
void sort(int a[MAX], int m)
{
int temp;
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
}
int nth_smallest(int a[MAX], int m, int n)
{
sort(a,m);
return a[n];}
int main()
{
printf("Enter the number of elements\n");
scanf("%d",&m);
printf("Enter the elements of array\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position n\n");
scanf("%d",&n);
nth_smallest(a,m,n);
printf("the nth smallest element is %d\n",a[n]);
return 0;
}
