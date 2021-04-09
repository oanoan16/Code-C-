#include <stdio.h>
#include <string.h>

typedef struct{
    char a[100];
} str;
str w[100];

int main()
{
	char s[100], str[100], smax[100], smin[100], kmax, kmin;
	int a[100]={0}, k=0;
	gets(s);
    
	char *token = strtok(s, " ");
	strcpy(smax, token);
    strcpy(smax, token);
    kmax=strlen(smax);
    kmin=strlen(smin);
	token = strtok('\0', " ");
	while (token != '\0'){
        strcpy(str, token);
        if (strlen(str)>smax) strcpy(smax, str);
		else  if (strlen(str)<strlen(smin) strcpy(smin, str);
		token = strtok('\0', " ");
	}
	
	printf("%s %s", smax, smin;
}

