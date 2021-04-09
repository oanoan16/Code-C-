#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    char a[100];
} str;
str w[100];

int main(){
	char s[100];
	gets(s);
	strlwr(s);
	int k=0, i=0;
	for (char *token = strtok(s, " "); token != '\0'; token = strtok('\0', " ")) 
		strcpy(w[k++].a, token);
	for (i=1; i<k; i++){
		w[i].a[0]-=32;
		if (i==k-1)	printf("%s, ", w[i].a);
		else printf("%s ", w[i].a);
	}
	printf("%s", strupr(w[0].a));
	return 0;
}
