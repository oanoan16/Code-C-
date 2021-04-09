#include <stdio.h>
#include <string.h>

int main()
{
	char s[100], s1[100], str[100];
	gets(s);
	gets(s1);
	for (char *token = strtok(s, " "); token != '\0'; token = strtok('\0', " ")){
		int c = 0;
		memset(str, 0, sizeof(str));
		strcpy(str, token);
		if (strcmp(str, s1)!=0) printf("%s ", str);
	}
	return 0;
}
