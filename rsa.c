#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
int t; 
while(b!=0)
{
t=a%b;
 a=b;
  b=t;
}
return a;
}

long cal(long text,long key,long n)
{
long res=1,i;
for(i=0;i<key;i++) 
res=(res%n)*text;
res=res%n; 
return res;
}

int main()
{
int p,q,n,x,e,phi,j,y,i;
char ciper[20],decrp[20];
char text[20]; 
printf("\n enter prime no.1:\t");
scanf("%d",&p);
printf("\n enter prime no.2:\t");
scanf("%d",&q);
n=p*q;
 phi=(p-1)*(q-1);
for(e=2;e<phi;e++)
{
if(gcd(e,phi)==1)
{
x=e; 
break;
}
}
printf("\nthe value of public key is {%d , %d}",x,n);

for(j=2;j<phi;j++)
{
if(((j*x)%phi)==1)
{
y=j;
break;
}
}
printf("\nthe value of private key is {%d , %d}",y,n);

printf("\nenter the plain text:");
scanf("%s",text);
i=0;
printf("\ncipher text is:\t");
while(text[i]!='\0')
{
ciper[i]=cal(text[i]-97,x,n);
printf("%c ",ciper[i]+97);
decrp[i]=cal(ciper[i],y,n)+97;
i++;
}
printf("\n the received text is %s",decrp);
return 0;
}
