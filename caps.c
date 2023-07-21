#include<stdio.h>
#include<string.h>
int main()
{
char str[150];
gets(str);
int len=0;
len=strlen(str);
for(int i=0;i<len;i++)
{
   if(i==0||i==(len-1))
   {
       str[i]=toupper(str[i]);
   }
   if(str[i]==' ')
   {
       str[i-1]=toupper(str[i-1]);
       str[i+1]=toupper(str[i+1]);
   }
}
printf("%s",str);
return 0;
}
