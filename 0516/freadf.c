#include <stdio.h>
#include <string.h>
#define MAXLINE 80

int main(int argc, char *argv[]){
	FILE *fp;
	char buffer[MAXLINE];

	int n;
	char c;
	printf("파일이름 입력: ");
	printf("\n");	
	printf("라인수 입력: ");
	scanf("%d", &n);
	printf("문자열 입력: ");
	scanf("%s" , &c);
	printf("end");
}


