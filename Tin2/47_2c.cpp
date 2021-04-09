#include <stdio.h>
#include <string.h>

typedef struct{
    char a[100];
} str;
str w1[100], w2[100];

int main (){
    char s1[100], s2[100];
    gets(s1);
	gets(s2);
	
	int k=0, h=0;
	for (char *token1 = strtok(s1, " "); token1 != '\0'; token1 = strtok('\0', " ")) 
		strcpy(w1[++k].a, token1);
	for (char *token2 = strtok(s2, " "); token2 != '\0'; token2 = strtok('\0', " "))
		strcpy(w2[++h].a, token2);
		
	for (int i=0; i<k; i++)
		for (int j=i+1; j<=k; j++)
			if (strcmp(w1[j].a, w1[i].a) == -1){
				str tmp = w1[i];
				w1[i] = w1[j];
				w1[j] = tmp;
			}   
			else if (strcmp(w1[j].a, w1[i].a) == 0) *w1[j].a ='\0';
    
    for (int i=0; i<=k; i++){
    	int c=0;
    	if (*w1[i].a != '\0'){
    		for (int j=0; j<=h; j++)
    			if (strcmp(w1[i].a, w2[j].a) == 0){
    				c=1;
    				break;
				}
			if (!c) printf("%s ", w1[i].a);
		}
	}
	return 0;
}




