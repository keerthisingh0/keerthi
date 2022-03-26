#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,totalwords;
totalwords=1;
printf("\nenter any sentence: ");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
totalwords=totalwords+1;
}
}
printf("\n the total number of eords in the sentence '%s'=%d",str,totalwords);
return 0;
}
