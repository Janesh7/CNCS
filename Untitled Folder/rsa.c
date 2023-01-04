#include<stdlib.h>
#include<string.h>
int gcd(long m,long n)
{
while(n!=0)
{
long r=m%n;
m=n;
n=r;
}
return m;
}
int rsa(char message[40])
{
int p=0,q=0;
long n=0,phi=0,noflem=0,e=0,d=0,i=0,j=0;
long encrypted[100]={0},decrypted[100]={0},nummes[100]={0};
printf("Enter the values of p and q\n");
scanf("%d%d",&p,&q);
n=p*q;
phi=(p-1)*(q-1);
for(i=2;i<phi;i++)
if(gcd(i,phi)==1)
break;
e=i;
for(i=2;i<phi;i++)
if((e*i-1)%phi==0)
break;
d=i;
for(i=0;i<strlen(message);i++)
{
nummes[i]=message[i]-96;
noflem=strlen(message);
}
for(i=0;i<noflem;i++)
{
encrypted[i]=1;
for(j=0;j<e;j++)
encrypted[i]=(encrypted[i]*nummes[i])%n;
}
printf("encrypted message\n");
for(i=0;i<noflem;i++)
{
printf("%ld",encrypted[i]);
printf("%c\t",(char)(encrypted[i]+96));
}
for(i=0;i<noflem;i++)
{
decrypted[i]=1;
for(j=0;j<d;j++)
decrypted[i]=(decrypted[i]*encrypted[i])%n;
}
printf("\ndecrypted message\n");
for(i=0;i<noflem;i++)
{
printf("%c\t",(char)(decrypted[i]+96));
}
return 0;
}
int main()
{
char msg[40];
printf("Enter the message to encrypt\n");
scanf("%s",&msg);
rsa(msg);
return 0;
}
