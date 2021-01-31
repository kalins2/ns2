#include<stdio.h>
#include<string.h>
 void main()
 {
 char buff[15];
 int pass=0;
 printf("enter the password\n");
 gets(buff);
 if(strcmp(buff,"root"))
 {
 printf("wrong password\n");
 }
 else
 {
 printf("correct password\n");
 pass=1;
 }
 if(pass)
 {
 printf("root access has been given to user\n");
 }
 }
 
