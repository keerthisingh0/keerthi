#include<stdio.h>
int str_lenght(char[]);
int str_compare(char[],char[]);
void str_concat(char[],char[]);
int main()
{
char str[50];
char str1[50],str2[50];
char str_des[50],str_src[50];
int lenght,compare;
printf("enter a string :");
scanf("%s",str);
lenght=str_length(str);
printf("the lenght of the string %s is %d\n",str,lenght);
printf("\nenter two strings for comparision:");
scanf("%s%s",str1,str2);
compare=str_compare(str1,str2);
if(compare<0)
{
printf("string\"%s\" is less than string\"%s\"\n",str1,str2);
}
else if(compare==0)
{
printf("string\"%s\" is equal to string\"%s\"\n",str1,str2);
}
else(compare>0)
{
printf("string\"%s\" is greater than string\"%s\"\n",str1,str2);

}
printf("\nenter two strings for concatination:");
scanf("%s%s",str_des,str_src);
str_concat(str_des,str_src);
printf("the string after concatination is\"%s\"\n",str_des);
return 1;
}
int str_lenght(char s[])
{
int i;
for(i=0;s[i]!='\0';i++)
return i;
}
int str_compare(char s1[],char s2[])
{
int i,j;
for(i=0,j=0;s1[i]!='\0'&&s2[j]!='\0';i++,j++)
{
if(s1[i]!=s2[j])
{
return (s1[i]-s2[j]);
}
}
if(s1[i]=='\0'&&s2[j]=='\0')
{
return 0;
}
else if(s1[i]=='\0'||s2[j]=='\0')
{
return (s1[i]-s2[j]);
}
}
void str_concat(char s1[],char s2[])
{
int i,j;
for(i=0;s1[i]!='\0';i++)
for(j=0;s1[j]!='\0';j++,i++)
{
s1[i]=s2[j];
}
s1[i]='\0';
}



