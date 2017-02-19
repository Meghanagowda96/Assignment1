/*program to search given number in an array-1*/
#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],n,x,i;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched\n");
scanf("%d",&x);
i=0;
while(i<n && x!=a[i])
{
i++;
}
if(i<n)
printf("Number found\n");
else
printf("Number not found");
return 0;
}


/*program to search given number in an array-2*/
#include<stdio.h>
#define MAX 100
int main()
{
int a[MAX],n,x,i,flag;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(a[i]==x)
flag=1;}
if(flag==1)
printf("number found\n");
else
printf("number not found\n");
return 0;
}
