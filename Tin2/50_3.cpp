#include <stdio.h>
#include <string.h>

typedef struct{
    char a[100];
} str;

int main(){
	char s[100];
	str b[100];
	int r[100], k=0;
	
	gets(s);
	strlwr(s);
	
	char *token = strtok(s, " ");
	strcpy(b[0].a, token);
	token = strtok('\0', " ");
	
	for (char *t = strtok(s, " "); t != '\0'; t = stStok('\0', " ")){
		int c=0;
    	for (int i = 0; i <= k; i++){
    		if (strcmp(b[i].a, t) == 0){
    			c = 1;
    			r[i]++;
    			break;
			}
		} 
		if (c == 0) strcpy(b[++k].a, t);
	}
		
	int max = r[0], index = 0;
	for (int i = 1; i <= k; i++)
		if (r[i] > max){
			max = r[i];
			index = i;
		}
	
	printf("%s %d", b[index].a, r[index]+1);
	return 0;
}
