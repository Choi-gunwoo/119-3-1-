#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

	char Name[100];
	char Year[100];
	char Month[100];
	char Date[100];
	char Sales[100];

int main(){
		 
	printf("\n\t\t****�����Է�****\n\n");
	printf("Store Name : ");
	scanf("%s", &Name);
	printf("Year : ");
	scanf("%s", &Year);
	printf("Month : ");
	scanf("%s", &Month);
	printf("Date : ");
	scanf("%s", &Date);
	printf("���� : ");
    scanf("%s", &Sales);
		        
	FILE *fp =NULL;	        
	fp=fopen("sales.txt","a");
	fprintf(fp,"%s %s-%s-%s %s\n", &Name, &Year, &Month, &Date, &Sales); 			
	fclose(fp); 
		
    return 0;
} 
