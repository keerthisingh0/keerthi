#include <stdio.h>
int main()
{
int a,b;
float c;
char op;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("\nenter your choice \n '+' for adddition \n '-' for subtraction \n '*' for multiplication \n '/' for division \n '%%'for remainder \n");
scanf(" %c",&op);
if (op =='+')
{
c=a+b;

}
else if (op =='-')
{
c=a-b;

}
else if (op =='*')
{
c=a*b;

}
else if (op =='/')
{
if (b==0)
{
printf("enter non zero number");
}
else
{
c= a/b;

}

}
else if (op =='%')
{
if (b==0)
{
printf("enter non zero number");
}
else
{
c=a%b;

}

}
else
{
printf("\ninvalid input");
}
printf("output is %f",c);
return 0;

}
