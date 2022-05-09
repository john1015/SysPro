#include <stdio.h>
#include<string.h>
#define MAXLINE 80
int main(int argc,char *argv[])
{
	File *fp;
	char buffer[MAXLINE],a[MAXLINE];
	int i=0,count = 0;

	if(argc != 2) {
		fprint(stderr, "사용법 : 파일이름 라인 문자열\n");
		return 1;
	}
	if( (fp = fopen(argv[1],"r")) == NULL)
	{
		fprint(stderr, "파일열기 오류");
		return 2;
	}
	while(fgets(buffer,MAXLINE,fp) != NULL){
		count++;
		if (count == i){
			char *b = strtok(buffer,a);
			printf("%s",b);
		}
		i++;
	}
	return 0;
}
