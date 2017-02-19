/*program to find first repeated element*/
#include<stdio.h>
#define MAX 100
int search(int b[MAX], int x, int n)
{
int i;
for(i=0;i<n;i++)
{
if(b[i]==x)
return 1;
else
return 0;
}
}
int main()
{
int a[MAX],b[MAX],n,i,j,flag=0,pos,x,res;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=0;
}
b[0]=a[0];
for(i=0;i<n;i++)
{
x=a[i];
res=search(b,x,n);
if(res==1)
{
flag++;
pos=i;
}
else
b[i]=a[i];
}
if(flag>1)
printf("The first repeated element is %d\n",a[pos]);
else
printf("No repeatations\n");
return 0;
}
