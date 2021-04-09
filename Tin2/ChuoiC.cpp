#include <stdio.h>
#include <string.h>

//word[1].m=10;
//worrd

typedef struct{
    char a[100], b[100];
} str;
str word[100];

int main (){
	int j=0, k=0;
	char s[100];
	gets(s);
    if (s[j]!=32) j++;
    for (int i=1; i<=strlen(s); i++){
        if (s[i]!=32 || s[i-1]!=32) s[j++]=s[i];
    }
    
//    for (int i=0; i<=k; i++) printf("%s ", word[i].a);
    
//    for (char *token=strtok(s, " "); token!=NULL; token=strtok(NULL, " "))
//       puts(token);
       
    char *token1 = strtok(s, " ");
    printf("%s", token1);
	strcpy(word[0].a, token1);
	token1 = strtok('\0', " ");
	/*
    int k = 0, c=0;
    
    while (token1 != '\0'){
    	for (int i = 0; i <= k; i++){
    		int c=0;
    		if (strcmp(word[i].a, token1) == 0){
    			c = 1;
    			break;
			}
		}
    	if (!c) strcpy(word[++k].a, token1);    		
        token1 = strtok('\0', " ");
    }
/*	char s1[100], s2[100];
    gets(s1);
	gets(s2);
	
	int k=-1, h=-1;
	for (char *token1 = strtok(s1, " "); token1 != '\0'; token1 = strtok('\0', " ")) 
		strcpy(word[++k].a, token1);
	for (char *token2 = strtok(s2, " "); token2 != '\0'; token2 = strtok('\0', " "))
		strcpy(word[++h].b, token2);
		
	for (int i=0; i<k; i++)
		for (int j=i+1; j<=k; j++)
			if (strcmp(word[j].a, word[i].a) == -1){
				str *tmp = word[i].a;
				word[i].a = word[j].a;
				word[j].a = tmp;
			}   
			else if (strcmp(word[j].a, word[i].a) == 0) *word[j].a ='\0';
    
    for (int i=0; i<=k; i++){
    	int c=0;
    	if (*word[i].a != '\0'){
    		for (int j=0; j<=h; j++)
    			if (strcmp(word[i].a, word[j].b) == 0){
    				c=1;
    				break;
				}
			if (!c) printf("%s ", word[i].a);
		}
	}
*/
	return 0;
}
/*

 xoa dau cach thua
 	int j=0;
    if (s[j]!=32) j++;
    for (int i=1; i<=strlen(s); i++){
        if (s[i]!=32 || s[i-1]!=32) s[j++]=s[i];
    }
    
    for (int i=0; i<=k; i++) printf("%s ", word[i].a);
    
    for (char *token=strtok(s, " "); token!=NULL; token=strtok(NULL, " "))
       puts(token);
       
    char *token1 = strtok(s1, " ");
    printf("%s", token1);
	strcpy(word[0].a, token1);
	token1 = strtok('\0', " ");
    int k = 0, c=0;
    
    while (token1 != '\0'){
    	for (int i = 0; i <= k; i++){
    		int c=0;
    		if (strcmp(word[i].a, token1) == 0){
    			c = 1;
    			break;
			}
		}
    	if (!c) strcpy(word[++k].a, token1);    		
        token1 = strtok('\0', " ");
    }
*/


