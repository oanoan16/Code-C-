#include <stdio.h>
#include <string.h>
typedef struct {
    short id;
    char name[15];
    int page;
} book;  // rút gọn typedef + struct 

int main(){
    book b;
    printf("b size: %d, add: %d", sizeof(b), &b);
    b.id=10;
    strcpy(b.name, "THCS2 p");
    b.page=100;
    
    book *pb;
    pb=(book*)malloc(sizeof(b));
    
    printf("pb {id: %d, name: %s, page: %d}\n", pb->id, pb->name, pb->page);
}

/*
khi khai bao bien cau truc ket hop tu khoa typedef

*/
