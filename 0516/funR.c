#include <stdio.h>
#include <string.h>
#define MAXLINE 80

int main(int argc, char *argv[])
{
	FILE *fp;
	char f;
	char s;
	char buffer[MAXLINE];
	int n;
	scanf("%s %d %s",&f, &n, &s);
	int i = 0;
	fp=f;


	while(fgets(buffer, MAXLINE, fp)) != NULL{
		if(i == n){
			char *b = strtok(buffer,s);
			printf("%s", b);
		}
		i++;
	}



	return 0;
}
