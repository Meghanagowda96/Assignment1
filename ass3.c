/*program to find intersection of 2 arrays*/
#include<stdio.h>
#define MAX 100
int i,j,k,n,m;
void intersection(int a[MAX], int b[MAX])
{
int c[MAX],flag;
for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
flag=1;
break;
}
}
if(flag==1)
{
c[k]=a[i];
k++;
}
}
if(k==0)
printf("Null set\n");
else
{
printf("The intersection of 2 arrays is:\n");
for(i=0;i<k;i++)
printf("%d ",c[i]);
}
}
int main()
{
int a[MAX],b[MAX];
printf("Enter the number of elements in array1\n");
scanf("%d",&n);
printf("Enter the number of elements in array2\n");
scanf("%d",&m);
printf("Enter the elements of array1\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements of array2\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
intersection(a,b);
return 0;
}
