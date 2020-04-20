#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>



void green(){	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}
void purple(){ 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
void yellow(){	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}
void blue(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
void white(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void time(){
	
  	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);
 
   printf("\n\t\t\t\t\t\t\t���� �ð� : %d-%d-%d %d:%d:%d\n",
         tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday,
         tm.tm_hour, tm.tm_min, tm.tm_sec);
 
}


// 1. �����Է�ĭ 2.���Ͱ��ĭ 3. ��������� 4. �������ͺ�
int main(){
	yellow();
	time();
	blue();
	printf("\n\t\tWelcome to Account Book Program\n\n");
	purple();
	printf("***�ڿ����ڵ��� ���� ����� ���α׷�\n");
	printf("***����� ���� ���� ���α׷�\n\n");
	white();
	printf("\t\t\t\t***MAIN MENU***\n\n");
	printf("\t\t================================================\n\n");
	printf("\t\t\t[1] �����Է�\n\n");		
	printf("\t\t\t[2] ���Ͱ��\n\n");
	printf("\t\t\t[3] ���������\n\n");
	printf("\t\t\t[4] �������ͺ�\n\n");
	printf("\t\t\t[5] ����\n\n");
	printf("\t\t================================================\n\n");
	
	
	
#define UP 72
#define DOWN 80
#define ENTER 13

int key;
int menuNum=1; //menuNum -> 1 ~ 5
	
		key = getch();
		if(key==224){
			key = getch(); //224�� ���� 
		}
		if(key == UP){ //�� ����Ű 
			if(menuNum>1){ menuNum--; } 
		} else if(key == DOWN){ //�Ʒ� ����Ű
			if(menuNum<5){ menuNum++; } 
		} else if(key == ENTER) {
			switch (menuNum){
				case 1: //select user
					system("cls");
					printf("HelloWorld1!!"); 
					break;
				case 2: //statistics
					system("cls"); //ȭ�� ����� 
					printf("HelloWorld2!!"); 
					break;
				case 3: //view user records
					system("cls");
					printf("HelloWorld3!!"); 
					break;
				case 4: //about
					system("cls"); 
					printf("HelloWorld4!!"); 
					while (!kbhit()); //Ű �Է� ��� 
					fflush(stdin);
					menuNum = 1;
					break;
				case 5: //quit
					system("cls"); //ȭ�� ����� 
					printf("����");
					exit(0);
					break;
				    }
			}
	
	
	
	return 0;
}
