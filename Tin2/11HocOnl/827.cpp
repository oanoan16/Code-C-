#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char s[100], str[100];
	gets(s);
	int k = 0;
	for (char *token = strtok(s, " "); token != '\0'; token = strtok('\0', " ")){
		int c = 0;
		memset(str, 0, sizeof(str));
		strcpy(str, token);
		for (int i=0; i<strlen(str); i++)
			if ((str[i] >= 'A' && str[i]<='Z') || (str[i] >= '0' && str[i]<='9'))  c++;
		if (c==strlen(str)) printf("%s ", str);
	}
	return 0;
}
