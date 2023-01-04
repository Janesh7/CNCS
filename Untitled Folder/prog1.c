#include<stdio.h>
#include<string.h>
int main(void)
{
char buff[15];
int pass=0;
printf("\n Enter the password\n");
gets(buff);
if(strcmp(buff,"thegeekstuff"))
{
printf("\n wrong password\n");
}
else
{
printf("\n correct password\n");
pass=1;
}
if(pass)
{
printf("\n root privilege is given to user\n");
}
return 0;
}

