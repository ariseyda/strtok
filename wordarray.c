#include<stdio.h>
#include<string.h>
#define size 100

int main(){
	
	FILE *f=fopen("words.txt","w");
	char s[size]="";
	
	printf("Enter a sentence:");
	gets(s);
	int len=strlen(s);
	
	int i,count=0;
	
	for(i=0;i<len;i++){
		if(s[i]==' '){
			count++;
		}
	    
	}
	
    char delim[]=" ";
    char *ptr = strtok(s, delim);
	
	while(ptr != NULL)
	{
		fprintf(f,"'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	
	/*for (i = 0; i < len; i++)
	{
		fprintf(f,"%d ", s[i]); 
	}
	fprintf(f,"\n");*/


	fprintf(f,"All words have been saved in words.txt file!\nThe sentence consists of %d words.",count+1);
    
	fclose(f);
	return 0;
}
