#include<stdio.h>
#include<string.h>
int main(void){
char buff[15];
int pass=0;
printf("\nEnter the password\n");
gets(buff);
if(strcmp(buff,"thegeekstuff"))
{
printf("\nwrong password\n");
}
else{
printf("\ncorrect password\n");
pass=1;
}
if(pass){
printf("\nRoot privileges are given to the user\n");
}
return 0;
}
