#include <stdio.h>
#include <string.h>
#define MAXLINE 80

int main(int argc, char *argv[])
{
	FILE *fp;
	char buffer[MAXLINE];
	int i = 0;
	int n;
	char s;
	scanf("%d", &n);
	if (argc != 2) {
		fprintf(stderr, "사용법:line 파일이름\n");
		return 1;
	}
	if ( (fp = fopen(argv[1],"r")) == NULL){
		fprintf(stderr, "파일 열기 오류\n");
		return 2;
	}
	while (fgets(buffer, MAXLINE, fp) != NULL) {
		if(i==n){
			char *b = strtok(buffer,":");
			printf("%s",b);
		}
		i++;
	}
	return 0;
}
