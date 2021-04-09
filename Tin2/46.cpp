#include <stdio.h>
#include <string.h>

typedef struct{
    char a[100];
} str;
str w[100];

int main()
{
	char s[100];
	int a[100]={0}, k=-1;
	gets(s);
	strlwr(s);
	for (char *token = strtok(s, " "); token != '\0'; token = strtok('\0', " ")) 
		strcpy(w[++k].a, token);	

	printf("%s",w[k].a);
	for (int i=0; i<k; i++) 
		printf("%c", w[i].a[0]);
	printf("@ptit.edu.vn",w[k].a);
}
