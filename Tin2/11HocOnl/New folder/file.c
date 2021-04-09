#include <stdio.h>
/*

int main(){
	int id;
	char name[100];
	FILE *fi = fopen("input.txt", "w");
//	file *fo = fopen("out.put", "w");
	
	fprintf(fi, "%d %s", 10, "hoa vang");
	
	fseek(fi, 0, SEEK_SET); // SEEK_CUR | SEEK_END
	
	fclose(fi);
	
	fi = fopen("input.txt", "r");
	fscanf(fi, "%d", &id);
	fgets(name, 50, fi);
	fclose(fi);
	printf("%d %s", id, name);
	
	
}
*/

typedef struct{
	int id;
	char name[100];
}book;

FILE *fi;
book b;
void nhap(){
	scanf("%d", &b.id);
	gets(b.name);
	
	fi = fopen("in.bin", "ab");
	fwrite(&b, sizeof(book), 1, fi);
	fclose(fi);
}

void xuat(){
	book tmp;
	fi=fopen("in.bin", "rb");
	int result = fread(&tmp, sizeof(book), 1, fi);
	while (result != 0){
		printf("%d%s\n", tmp.id, tmp.name);
		result = fread(&tmp, sizeof(book), 1, fi);
	}
	fclose(fi);
}

void sua(){
	book tmp;
	scanf("%d", &tmp.id);
	gets(tmp.name);
	fi=fopen("in.bin", "rb+");
	while(fread(&tmp, sizeof(book), 1, fi)){
		if (b.id==tmp.id){
			fseek(fi, sizeof(book), SEEK_CUR);
			fwrite(&tmp, sizeof(book), 1, fi);
			break;
		}
	}
	fclose(fi);
}
int main(){
	nhap();
	xuat();
	
	return 0;
	
}
