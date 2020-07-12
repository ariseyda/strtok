#include<stdio.h>
#include<string.h>
#define size 100

//Write a program that asks the user to enter a sentence and separates this sentence into words and saves the words into a string array. 
//The sentence can be limited to 20 words. 
//Then save the words in a text file, one after the other. 
//The user may or may not have placed a period at the end of the sentence. 
//The code you write must provide both conditions.

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

	

	fprintf(f,"All words have been saved in words.txt file!\nThe sentence consists of %d words.",count+1);
    
	fclose(f);
	return 0;
}
