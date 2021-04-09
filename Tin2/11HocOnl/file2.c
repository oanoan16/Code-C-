#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define max 100
typedef struct {
    char name[max];
    int age;
} authour;

typedef struct {
    short id;
    char name[max];
    int numOfAuthour;
    authour *book_authuor;
} book;

void nhap(book *b){
	scanf("%d\n", &b->id);  // scanf("%d ", &b.id);
	gets(b->name);	
	scanf("%d", &b->numOfAuthour);
	b->book_authuor = (authour*)malloc(b->numOfAuthour *sizeof(authour));
	
	for (int i=0; i< b->numOfAuthour; i++){
		fflush(stdin);
		get(b->book_authuor+i)->name);
		sacnf("%d\n", &b->book_authuor+i)->age);
	}
	scanf("%s ", &a->book_authuor.name);
	scanf("%d ", &b->book_authuor.age);
}

void xuat(book b){
	printf("book {id: %d, name: %s, author: %s}", b.id, b.name);
	for (int i=0; i<b.numOfAuthour; i++){
		printf("\t + author: %s %d\n", (b.book_authuor+i)->name, (b.book_authuor+i)->page);
	}
}

int main(){
	book b;
	nhap(&b);
	xuat(b);
	
}

