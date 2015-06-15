#include<stdio.h>
#include<string.h>

#define red "\x1B[31m"
#define green "\x1B[32m"
#define white "\x1B[37m"
  
main(int n,char *name[])
{
	char nam[100],output[50],o[20];
	int i,j;
	//system("clear");
	for(i=1;i<n;i++)
	{	
		strcpy(output,name[i]);
		for(j=0;j<(strlen(name[i])-1);j++);
		output[j++]='o';
		output[j++]='u';
		output[j]='t';
		snprintf(nam,100,"cc -o %s %s",output,name[i]);
		system(nam);
		FILE *f;
		f=fopen(output,"r");
		if(f)
			printf("\n\t\t\t\t\t\t %s Sucessfully Compiled File %s %s ",green,name[i],white);	
		else printf("\n\t\t\t\t\t %s Compiling File %s failed! File Not Found %s",red,name[i],white);				
	}
printf("\n\n\n\t\t\t\t\t\t");
}
