#include <stdio.h>

int main(){
	char t;
	char *p1 = "THCS", *p2;
	p2=p1;
	p1= "PTIT";
	printf("%s %s\n", p1, p2);
	return 0;
}
