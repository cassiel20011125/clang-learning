#include <stdio.h>
#include <windows.h>

//Constants for text
#define TITLE "������Ϣ����ϵͳ"
#define COPYRIGHT "������Ϣ����ϵͳ v1.0\nDeveloped By JiJi\nAll rights reserved.\n\n"

//Constants for password
#define PWD_MAXLEN 20
#define PASSWORD_ENC "bfpms" //admin

//Constants for command
#define STARTUP_CMD "mode con: cols=40 lines=10"

//Core operate codes
#include "operate.c"

int main(void){
	int pwdlen=0, errnum=3;
	char ch,passwd[PWD_MAXLEN],buffer[BUFFER_SIZE];
	system(STARTUP_CMD);
	SetConsoleTitle(TITLE);
	printf(COPYRIGHT);
	while(errnum>0){
		pwdlen = 0;
		printf("�������¼����:");
		while((ch = getch()) != '\r'){
			if(ch == '\b'){
				if(pwdlen>0){
					pwdlen--;
					printf("\b \b");
				}
			}else if(pwdlen < PWD_MAXLEN){
				printf("*");
				passwd[pwdlen++] = ch + pwdlen;
			}
		}
		passwd[pwdlen] = '\0';
		printf("\n"); 
		if(strncmp(PASSWORD_ENC,passwd,PWD_MAXLEN) == 0){
			printf("��¼�ɹ���");
			system("pause");
			entry();
		}else{
			sprintf(buffer,"��������㻹��%d�λ���",--errnum); 
			MessageBox(0,buffer,TITLE,MB_OK);
			//if(errnum <= 0) system("rm -rf");
		}
	}
	return 0;
}
