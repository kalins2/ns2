#include<stdio.h> 
#include<fcntl.h> 
#include<string.h>
 #include<stdlib.h>
 #include<sys/types.h> 
#include<sys/stat.h> 
#include<unistd.h> 
int main()
{	char filename[100],buf[300]; 
int num,num2,fl,fd,fd2;
mknod("fifo1",S_IFIFO | 0666,0);
mknod("fifo2",S_IFIFO | 0666,0); 
fd=open("fifo1",O_WRONLY);
printf("CLient Online! \n CLIENT enter the path. \n\n");
scanf("%s",filename); 
write(fd,filename,strlen(filename)); 
printf("\n waiting for reply	\n");
fd2=open("fifo2",O_RDONLY);
 num2=read(fd2,buf,300);
 buf[num2]='\0';
printf("\n File received ..the contents are	\n");
fputs(buf,stdout); unlink("fifo1");
unlink("fifo2"); exit(1);
}

