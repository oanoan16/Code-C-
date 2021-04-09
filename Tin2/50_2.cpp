#include <stdio.h>
#include <string.h>

typedef struct{
    char a[100];
} str;
str w[100];

int main()
{
	char s[100];
	int a[100]={0}, k=0;
	gets(s);
	strlwr(s);
	char *token = strtok(s, " ");
	strcpy(w[0].a, token);
	token = strtok('\0', " ");
	while (token != '\0'){
		int c=0;
    	for (int i = 0; i <= k; i++){
    		if (strcmp(w[i].a, token) == 0){
    			c = 1;
    			a[i]++;
    			break;
			}
		} 
		if (c==0) strcpy(w[++k].a, token);
		token = strtok('\0', " ");
	}
	int max=a[0], r=0;
	for (int i=1; i<=k; i++)
		if (a[i]>max){
			max=a[i];
			r=i;
		}
	printf("%s %d", w[r].a, a[r]+1);
}

