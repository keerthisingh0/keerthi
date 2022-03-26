#include <stdio.h>
int main()
{
int a[20],i,j,n,temp,key,first,last,mid;
//accept array size
printf("enter the number of elements : ");
scanf("%d",&n);
// accept n elements into the array
printf("enter %d integers :  ",n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
// sort array elements
for(i=0;i<n-1;i++)
{
for (j=0;j<n-1;j++)
{
if (a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
//print the sorted array 
printf("sorted arrray is ........................\n");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
//printf("\n");
}
printf("\nenter the value of key to be searched :  ");
scanf("%d",&key);
first=0;
last=n-1;
while(first<=last)
{
mid=(first+last)/2;
if (key==a[mid])
{
printf("the element %d is found at location %d \n",key,mid+1);
return 0;
}
else if (key<=a[mid])
{
last=mid-1;
}
else if (key>=a[mid])
{
first=mid+1;
}
printf("\nthe element %d is not found in the given arrray",key);
}
return 1;
}

